set(LLVM_LINK_COMPONENTS
  TransformUtils
  BitWriter
  CoreV1
  IRReaderV1
  SupportV1
  )

add_llvm_tool(llvm-split
  llvm-split.cpp

  DEPENDS
  intrinsics_gen
  )
