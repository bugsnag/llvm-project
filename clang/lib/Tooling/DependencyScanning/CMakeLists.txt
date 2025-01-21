set(LLVM_LINK_COMPONENTS
  ${LLVM_TARGETS_TO_BUILD}
  CoreV1
  OptionV1
  SupportV1
  TargetParserV1
  )

add_clang_library(clangDependencyScanning
  DependencyScanningFilesystem.cpp
  DependencyScanningService.cpp
  DependencyScanningWorker.cpp
  DependencyScanningTool.cpp
  ModuleDepCollector.cpp

  DEPENDS
  ClangDriverOptions

  LINK_LIBS
  clangAST
  clangBasic
  clangCodeGen
  clangDriver
  clangFrontend
  clangLex
  clangSerialization
  clangTooling
  )
