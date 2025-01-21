include_directories( ${CMAKE_CURRENT_BINARY_DIR}/.. ${CMAKE_CURRENT_SOURCE_DIR}/.. )

add_llvm_component_library(LLVMAArch64AsmParser
  AArch64AsmParser.cpp

  LINK_COMPONENTS
  AArch64Desc
  AArch64Info
  AArch64Utils
  CodeGenTypesV1
  MCV1
  MCParserV1
  SupportV1
  TargetParserV1

  ADD_TO_COMPONENT
  AArch64
  )

