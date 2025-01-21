add_llvm_component_library(LLVMAVRAsmParser
  AVRAsmParser.cpp

  LINK_COMPONENTS
  AVRDesc
  AVRInfo
  CodeGenTypesV1
  MCV1
  MCParserV1
  SupportV1

  ADD_TO_COMPONENT
  AVR
  )
