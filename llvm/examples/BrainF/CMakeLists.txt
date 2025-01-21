set(LLVM_LINK_COMPONENTS
  BitWriter
  CoreV1
  ExecutionEngine
  MCV1
  MCJIT
  SupportV1
  nativecodegen
  )

add_llvm_example(BrainF
  BrainF.cpp
  BrainFDriver.cpp
  )
