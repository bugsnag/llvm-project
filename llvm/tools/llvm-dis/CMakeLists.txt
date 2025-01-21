set(LLVM_LINK_COMPONENTS
  BitReaderV1
  CoreV1
  SupportV1
  )

add_llvm_tool(llvm-dis
  llvm-dis.cpp

  DEPENDS
  intrinsics_gen
  )
