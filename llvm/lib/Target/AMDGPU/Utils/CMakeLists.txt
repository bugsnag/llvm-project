add_llvm_component_library(LLVMAMDGPUUtils
  AMDGPUAsmUtils.cpp
  AMDGPUBaseInfo.cpp
  AMDGPUMemoryUtils.cpp
  AMDGPUPALMetadata.cpp
  AMDKernelCodeTUtils.cpp

  LINK_COMPONENTS
  Analysis
  BinaryFormatV1
  CodeGenTypesV1
  CoreV1
  MCV1
  SupportV1
  TargetParserV1

  ADD_TO_COMPONENT
  AMDGPU
  )
