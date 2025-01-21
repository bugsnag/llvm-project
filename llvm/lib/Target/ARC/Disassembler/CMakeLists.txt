add_llvm_component_library(LLVMARCDisassembler
  ARCDisassembler.cpp

  LINK_COMPONENTS
  ARCInfo
  CodeGenTypesV1
  MCDisassembler
  SupportV1

  ADD_TO_COMPONENT
  ARC
  )
