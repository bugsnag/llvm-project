set(LLVM_LINK_COMPONENTS
  CoreV1
  ExecutionEngine
  IRReaderV1
  JITLink
  OrcJIT
  SupportV1
  nativecodegen
  )

add_llvm_example(LLJITWithInitializers
  LLJITWithInitializers.cpp
  )

export_executable_symbols(LLJITWithInitializers)
