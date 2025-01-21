add_llvm_component_library(LLVMBitReaderV1
  BitcodeAnalyzer.cpp
  BitReader.cpp
  BitcodeReader.cpp
  MetadataLoader.cpp
  ValueList.cpp

  ADDITIONAL_HEADER_DIRS
  ${LLVM_MAIN_INCLUDE_DIR}/llvm/Bitcode

  DEPENDS
  intrinsics_gen

  LINK_COMPONENTS
  BitstreamReaderV1
  CoreV1
  SupportV1
  TargetParserV1
  )
