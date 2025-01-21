add_llvm_component_library(LLVMAMDGPUAsmParser
  AMDGPUAsmParser.cpp

  LINK_COMPONENTS
  AMDGPUDesc
  AMDGPUInfo
  AMDGPUUtils
  CodeGenTypes
  MCV1
  MCParserV1
  SupportV1
  TargetParserV1

  ADD_TO_COMPONENT
  AMDGPU
  )

add_dependencies(LLVMAMDGPUAsmParser LLVMAMDGPUUtils)
