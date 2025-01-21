add_llvm_component_library(LLVMBPFAsmParser
  BPFAsmParser.cpp

  LINK_COMPONENTS
  MCV1
  MCParserV1
  BPFDesc
  BPFInfo
  SupportV1

  ADD_TO_COMPONENT
  BPF
  )
