add_llvm_component_library(LLVMPerfJITEvents
  PerfJITEventListener.cpp

  LINK_COMPONENTS
  CodeGenV1
  CoreV1
  DebugInfoDWARFV1
  ExecutionEngine
  ObjectV1
  SupportV1
  )

add_dependencies(LLVMPerfJITEvents LLVMCodeGen)
