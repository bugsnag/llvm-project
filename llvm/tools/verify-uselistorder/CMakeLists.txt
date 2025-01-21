set(LLVM_LINK_COMPONENTS
  AsmParser
  BitReaderV1
  BitWriter
  CoreV1
  IRReaderV1
  SupportV1
  )

add_llvm_tool(verify-uselistorder
  verify-uselistorder.cpp

  DEPENDS
  intrinsics_gen
  )
