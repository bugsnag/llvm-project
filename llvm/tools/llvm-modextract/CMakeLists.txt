set(LLVM_LINK_COMPONENTS
  BitReaderV1
  BitWriter
  CoreV1
  SupportV1
  )

add_llvm_tool(llvm-modextract
  llvm-modextract.cpp
  )
