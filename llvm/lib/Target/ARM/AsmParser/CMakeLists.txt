add_llvm_component_library(LLVMARMAsmParser
  ARMAsmParser.cpp

  LINK_COMPONENTS
  ARMDesc
  ARMInfo
  ARMUtils
  CodeGenTypesV1
  MCV1
  MCParserV1
  SupportV1
  TargetParserV1

  ADD_TO_COMPONENT
  ARM
  )
