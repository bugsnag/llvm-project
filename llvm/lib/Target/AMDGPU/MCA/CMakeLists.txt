add_llvm_component_library(LLVMAMDGPUTargetMCA
  AMDGPUCustomBehaviour.cpp

  LINK_COMPONENTS
  AMDGPUDesc
  AMDGPUInfo
  AMDGPUUtils
  CodeGenTypesV1
  MCV1
  MCA
  MCParserV1
  SupportV1
  TargetParserV1

  ADD_TO_COMPONENT
  AMDGPU
  )

add_dependencies(LLVMAMDGPUTargetMCA LLVMAMDGPUUtils)
