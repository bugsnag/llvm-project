add_llvm_component_library(LLVMAVRDisassembler
  AVRDisassembler.cpp

  LINK_COMPONENTS
  AVRInfo
  CodeGenTypesV1
  MCV1
  MCDisassembler
  SupportV1

  ADD_TO_COMPONENT
  AVR
  )

