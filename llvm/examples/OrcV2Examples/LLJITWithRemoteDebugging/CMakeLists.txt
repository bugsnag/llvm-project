set(LLVM_LINK_COMPONENTS
  CoreV1
  ExecutionEngine
  IRReaderV1
  JITLink
  OrcJIT
  OrcShared
  OrcTargetProcess
  SupportV1
  TargetParserV1
  nativecodegen
  )

if (LLVM_INCLUDE_UTILS)
  add_llvm_example(LLJITWithRemoteDebugging
    LLJITWithRemoteDebugging.cpp
    RemoteJITUtils.cpp

    DEPENDS
      llvm-jitlink-executor
  )

  export_executable_symbols(LLJITWithRemoteDebugging)
endif()
