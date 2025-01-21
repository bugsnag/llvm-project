add_llvm_component_library(LLVMARMDisassembler
  ARMDisassembler.cpp

  LINK_COMPONENTS
  ARMDesc
  ARMInfo
  ARMUtils
  CodeGenTypes
  MCV1
  MCDisassembler
  SupportV1

  ADD_TO_COMPONENT
  ARM
  )
