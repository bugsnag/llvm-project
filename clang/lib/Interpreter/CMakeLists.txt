set(LLVM_LINK_COMPONENTS
   coreV1
   native
   OptionV1
   OrcJit
   OrcShared
   OrcTargetProcess
   SupportV1
   TargetV1
   TargetParserV1
  )

add_clang_library(clangInterpreter
  IncrementalExecutor.cpp
  IncrementalParser.cpp
  Interpreter.cpp

  DEPENDS
  intrinsics_gen
  ClangDriverOptions

  LINK_LIBS
  clangAST
  clangAnalysis
  clangBasic
  clangCodeGen
  clangDriver
  clangFrontend
  clangFrontendTool
  clangLex
  clangParse
  clangSema
  clangSerialization
  )
