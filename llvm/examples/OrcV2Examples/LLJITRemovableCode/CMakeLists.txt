set(LLVM_LINK_COMPONENTS
  CoreV1
  ExecutionEngine
  IPO
  IRReaderV1
  OrcJIT
  ScalarOpts
  SupportV1
  nativecodegen
  )

add_llvm_example(LLJITRemovableCode
  LLJITRemovableCode.cpp
  )

export_executable_symbols(LLJITRemovableCode)
