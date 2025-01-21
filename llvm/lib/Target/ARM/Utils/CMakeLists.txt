add_llvm_component_library(LLVMARMUtils
  ARMBaseInfo.cpp

  LINK_COMPONENTS
  SupportV1

  ADD_TO_COMPONENT
  ARM
  )
