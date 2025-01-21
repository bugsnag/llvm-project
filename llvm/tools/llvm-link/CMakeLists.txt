set(LLVM_LINK_COMPONENTS
  BinaryFormatV1
  BitReaderV1
  BitWriter
  CoreV1
  IRReaderV1
  Linker
  ObjectV1
  SupportV1
  TransformUtils
  IPO
  )

add_llvm_tool(llvm-link
  llvm-link.cpp

  DEPENDS
  intrinsics_gen
  )
