set(LLVM_LINK_COMPONENTS
  CoreV1
  ExecutionEngine
  IRReaderV1
  JITLink
  OrcJIT
  SupportV1
  nativecodegen
  )

add_llvm_example(LLJITDumpObjects
  LLJITDumpObjects.cpp
  )

export_executable_symbols(LLJITDumpObjects)
