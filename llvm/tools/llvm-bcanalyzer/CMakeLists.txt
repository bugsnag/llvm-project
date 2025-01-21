set(LLVM_LINK_COMPONENTS
  BitReaderV1
  BitstreamReaderV1
  SupportV1
  )

add_llvm_tool(llvm-bcanalyzer
  llvm-bcanalyzer.cpp

  DEPENDS
  intrinsics_gen
  )
