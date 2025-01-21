set(LLVM_LINK_COMPONENTS
  CoreV1
  ExecutionEngine
  IRReaderV1
  JITLink
  MCV1
  OrcJIT
  Support
  TargetV1
  nativecodegen
  )

add_llvm_example(OrcV2CBindingsAddObjectFile
  OrcV2CBindingsAddObjectFile.c
  )

export_executable_symbols(OrcV2CBindingsAddObjectFile)
