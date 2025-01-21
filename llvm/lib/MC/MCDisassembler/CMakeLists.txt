add_llvm_component_library(LLVMMCDisassembler
  Disassembler.cpp
  MCDisassembler.cpp
  MCExternalSymbolizer.cpp
  MCRelocationInfo.cpp
  MCSymbolizer.cpp

  LINK_COMPONENTS
  MCV1
  SupportV1
  TargetParserV1
  )
