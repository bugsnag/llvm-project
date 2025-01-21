add_llvm_component_library(LLVMMCJIT
  MCJIT.cpp

  DEPENDS
  intrinsics_gen

  LINK_COMPONENTS
  CoreV1
  ExecutionEngine
  ObjectV1
  RuntimeDyld
  SupportV1
  TargetV1
  )
