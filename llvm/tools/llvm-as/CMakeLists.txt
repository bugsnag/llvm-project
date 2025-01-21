set(LLVM_LINK_COMPONENTS
  AsmParserV1
  BitWriter
  CoreV1
  SupportV1
  )

add_llvm_tool(llvm-as
  llvm-as.cpp

  DEPENDS
  intrinsics_gen
  )
