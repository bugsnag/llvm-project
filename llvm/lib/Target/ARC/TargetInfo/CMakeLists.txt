add_llvm_component_library(LLVMARCInfo
  ARCTargetInfo.cpp

  LINK_COMPONENTS
  MCV1
  SupportV1

  ADD_TO_COMPONENT
  ARC
  )
