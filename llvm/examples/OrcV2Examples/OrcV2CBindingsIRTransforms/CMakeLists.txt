set(LLVM_LINK_COMPONENTS
  CoreV1
  ExecutionEngine
  IRReaderV1
  JITLink
  MCV1
  OrcJIT
  Passes
  SupportV1
  TargetV1
  nativecodegen
  )

add_llvm_example(OrcV2CBindingsIRTransforms
  OrcV2CBindingsIRTransforms.c
  )

export_executable_symbols(OrcV2CBindingsIRTransforms)
