add_llvm_component_library(LLVMAMDGPUInfo
  AMDGPUTargetInfo.cpp

  LINK_COMPONENTS
  MCV1
  SupportV1

  ADD_TO_COMPONENT
  AMDGPU
  )
