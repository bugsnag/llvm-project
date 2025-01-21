set(LLVM_LINK_COMPONENTS
  CoreV1
  ExecutionEngine
  IRReaderV1
  OrcJIT
  SupportV1
  nativecodegen
  )

add_llvm_example(LLJITWithObjectCache
  LLJITWithObjectCache.cpp
  )

export_executable_symbols(LLJITWithObjectCache)
