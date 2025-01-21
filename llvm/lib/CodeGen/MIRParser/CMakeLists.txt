add_llvm_component_library(LLVMMIRParser
  MILexer.cpp
  MIParser.cpp
  MIRParser.cpp

  ADDITIONAL_HEADER_DIRS
  ${LLVM_MAIN_INCLUDE_DIR}/llvm/CodeGen/MIRParser

  DEPENDS
  intrinsics_gen

  LINK_COMPONENTS
  AsmParser
  BinaryFormatV1
  CodeGen
  CodeGenTypesV1
  CoreV1
  MCV1
  SupportV1
  TargetV1
  )
