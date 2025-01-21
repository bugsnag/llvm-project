add_llvm_component_library(LLVMCSKYAsmParser
  CSKYAsmParser.cpp

  LINK_COMPONENTS
  CSKYDesc
  CSKYInfo
  MCV1
  MCParserV1
  SupportV1
  TargetParserV1

  ADD_TO_COMPONENT
  CSKY
  )
