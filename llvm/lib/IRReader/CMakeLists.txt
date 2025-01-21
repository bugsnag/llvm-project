add_llvm_component_library(LLVMIRReaderV1
  IRReader.cpp

  ADDITIONAL_HEADER_DIRS
  ${LLVM_MAIN_INCLUDE_DIR}/llvm/IRReader

  DEPENDS
  intrinsics_gen

  LINK_COMPONENTS
  AsmParserV1
  BitReaderV1
  CoreV1
  SupportV1
  )
