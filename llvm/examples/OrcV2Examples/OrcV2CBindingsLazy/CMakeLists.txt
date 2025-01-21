set(LLVM_LINK_COMPONENTS
  CoreV1
  ExecutionEngine
  IRReaderV1
  JITLink
  MCV1
  OrcJIT
  SupportV1
  TargetV1
  nativecodegen
  )

add_llvm_example(OrcV2CBindingsLazy
  OrcV2CBindingsLazy.c
  )

export_executable_symbols(OrcV2CBindingsLazy)
