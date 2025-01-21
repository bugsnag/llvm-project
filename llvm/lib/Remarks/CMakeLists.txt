add_llvm_component_library(LLVMRemarksV1
  BitstreamRemarkParser.cpp
  BitstreamRemarkSerializer.cpp
  Remark.cpp
  RemarkFormat.cpp
  RemarkLinker.cpp
  RemarkParser.cpp
  RemarkSerializer.cpp
  RemarkStreamer.cpp
  RemarkStringTable.cpp
  YAMLRemarkParser.cpp
  YAMLRemarkSerializer.cpp

  ADDITIONAL_HEADER_DIRS
  ${LLVM_MAIN_INCLUDE_DIR}/llvm/Remarks

  LINK_COMPONENTS
  BitstreamReaderV1
  SupportV1

  DEPENDS
  intrinsics_gen
)
