add_llvm_component_library(LLVMARCDesc
  ARCInstPrinter.cpp
  ARCMCTargetDesc.cpp
  ARCMCAsmInfo.cpp

  LINK_COMPONENTS
  MCV1
  SupportV1
  ARCInfo

  ADD_TO_COMPONENT
  ARC
  )
