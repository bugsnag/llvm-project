# AsmParser
add_llvm_component_library(LLVMAsmParserV1
  LLLexer.cpp
  LLParser.cpp
  Parser.cpp

  ADDITIONAL_HEADER_DIRS
  ${LLVM_MAIN_INCLUDE_DIR}/llvm/ASMParser

  DEPENDS
  intrinsics_gen

  LINK_COMPONENTS
  BinaryFormatV1
  CoreV1
  SupportV1
  )
