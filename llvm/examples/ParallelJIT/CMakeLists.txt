set(LLVM_LINK_COMPONENTS
  CoreV1
  ExecutionEngine
  Interpreter
  MCV1
  MCJIT
  SupportV1
  nativecodegen
  )

add_llvm_example(ParallelJIT
  ParallelJIT.cpp
  )

target_link_libraries(ParallelJIT PRIVATE ${LLVM_PTHREAD_LIB})
