add_llvm_component_library(LLVMARMInfo
  ARMTargetInfo.cpp

  LINK_COMPONENTS
  MCV1
  SupportV1

  ADD_TO_COMPONENT
  ARM
  )
