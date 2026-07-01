//===- FuzzerUtilLinux.cpp - Misc utils for Linux. ------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
// Misc utils for Linux.
//===----------------------------------------------------------------------===//
#include "FuzzerPlatform.h"
#if LIBFUZZER_LINUX || LIBFUZZER_NETBSD || LIBFUZZER_FREEBSD ||                \
    LIBFUZZER_EMSCRIPTEN
#include "FuzzerCommand.h"
#include "FuzzerInternal.h"

#include <errno.h>
#include <fcntl.h>
#include <signal.h>
#include <spawn.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <vector>

extern "C" char **environ;

namespace fuzzer {

int ExecuteCommand(const Command &Cmd) {
  // SECURITY FIX: Use posix_spawn with direct argument array instead of
  // system() to prevent CWE-78 (OS Command Injection) and CWE-88 (Argument
  // Injection). Arguments are passed directly without shell interpretation.
  
  auto Args = Cmd.getArguments();
  size_t Argc = Args.size();
  if (Argc == 0)
    return -1;

  posix_spawnattr_t SpawnAttributes;
  if (posix_spawnattr_init(&SpawnAttributes))
    return -1;

  // Set default signal handling for child process
  sigset_t DefaultSigSet;
  sigemptyset(&DefaultSigSet);
  sigaddset(&DefaultSigSet, SIGINT);
  sigaddset(&DefaultSigSet, SIGQUIT);
  if (posix_spawnattr_setsigdefault(&SpawnAttributes, &DefaultSigSet) != 0 ||
      posix_spawnattr_setflags(&SpawnAttributes, POSIX_SPAWN_SETSIGDEF) != 0) {
    posix_spawnattr_destroy(&SpawnAttributes);
    return -1;
  }

  // Build argv array - arguments NOT passed through shell
  std::vector<const char *> Argv;
  Argv.reserve(Argc + 1);
  for (size_t i = 0; i < Argc; ++i)
    Argv.push_back(Args[i].c_str());
  Argv.push_back(nullptr);

  // Setup file actions for output redirection
  posix_spawn_file_actions_t FileActions;
  posix_spawn_file_actions_t *FileActionsPtr = nullptr;
  
  if (Cmd.hasOutputFile()) {
    if (posix_spawn_file_actions_init(&FileActions) != 0) {
      posix_spawnattr_destroy(&SpawnAttributes);
      return -1;
    }
    FileActionsPtr = &FileActions;
    
    // Add output file redirection with error checking
    if (posix_spawn_file_actions_addopen(&FileActions, STDOUT_FILENO,
                                         Cmd.getOutputFile().c_str(),
                                         O_WRONLY | O_CREAT | O_TRUNC, 0644) != 0) {
      posix_spawn_file_actions_destroy(&FileActions);
      posix_spawnattr_destroy(&SpawnAttributes);
      return -1;
    }
    
    // Combine stderr with stdout if requested
    if (Cmd.isOutAndErrCombined()) {
      if (posix_spawn_file_actions_adddup2(&FileActions, STDOUT_FILENO,
                                           STDERR_FILENO) != 0) {
        posix_spawn_file_actions_destroy(&FileActions);
        posix_spawnattr_destroy(&SpawnAttributes);
        return -1;
      }
    }
  }

  if (!Cmd.hasOutputFile() && Cmd.isOutAndErrCombined()) {
    if (posix_spawn_file_actions_init(&FileActions) != 0) {
      posix_spawnattr_destroy(&SpawnAttributes);
      return -1;
    }
    FileActionsPtr = &FileActions;

    if (posix_spawn_file_actions_adddup2(&FileActions, STDOUT_FILENO,
                                         STDERR_FILENO) != 0) {
      posix_spawn_file_actions_destroy(&FileActions);
      posix_spawnattr_destroy(&SpawnAttributes);
      return -1;
    }
  }

  pid_t Pid;
  // posix_spawnp requires char *const[] but does not modify arguments.
  // const_cast is safe here per POSIX specification.
  int ErrorCode = posix_spawnp(&Pid, Argv[0],
                               FileActionsPtr, &SpawnAttributes,
                               const_cast<char *const *>(Argv.data()),
                               environ);

  posix_spawnattr_destroy(&SpawnAttributes);
  if (FileActionsPtr)
    posix_spawn_file_actions_destroy(FileActionsPtr);

  if (ErrorCode != 0)
    return -1;

  // Wait for child process to complete
  int ProcessStatus = 0;
  pid_t WaitResult;
  do {
    WaitResult = waitpid(Pid, &ProcessStatus, 0);
  } while (WaitResult == -1 && errno == EINTR);

  if (WaitResult == -1)
    return -1;

  if (WIFEXITED(ProcessStatus))
    return WEXITSTATUS(ProcessStatus);
  if (WIFSIGNALED(ProcessStatus) && WTERMSIG(ProcessStatus) == SIGINT)
    return Fuzzer::InterruptExitCode();

  return ProcessStatus;
}

void DiscardOutput(int Fd) {
  FILE* Temp = fopen("/dev/null", "w");
  if (!Temp)
    return;
  dup2(fileno(Temp), Fd);
  fclose(Temp);
}

} // namespace fuzzer

#endif
