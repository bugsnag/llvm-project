set(LLVM_LINK_COMPONENTS
  CoreV1
  ExecutionEngine
  Interpreter
  MCV1
  MCJIT
  SupportV1
  nativecodegen
  )

add_llvm_example(HowToUseJIT
  HowToUseJIT.cpp
  )
