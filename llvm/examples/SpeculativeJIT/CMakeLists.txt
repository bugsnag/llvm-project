set(LLVM_LINK_COMPONENTS
  CoreV1
  IRReaderV1
  OrcJIT
  OrcTargetProcess
  ExecutionEngine
  SupportV1
  nativecodegen
  Analysis
  Passes
  )

add_llvm_example(SpeculativeJIT
  SpeculativeJIT.cpp
  )
