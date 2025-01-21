set(LLVM_LINK_COMPONENTS
  Analysis
  CodeGen
  CoreV1
  ExecutionEngine
  IPO
  IRPrinter
  IRReaderV1
  MCV1
  MCJIT
  ObjectV1
  Passes
  RuntimeDyld
  SelectionDAG
  SupportV1
  TargetV1
  TargetParserV1
  TransformUtils
  native
)

add_clang_library(clangHandleLLVM
  handle_llvm.cpp

  DEPENDS
  intrinsics_gen
  )
