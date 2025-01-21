set(LLVM_LINK_COMPONENTS
  IRReaderV1
  BitReaderV1
  BitWriter
  CoreV1
  SupportV1
  )

add_llvm_tool(llvm-cat
  llvm-cat.cpp
  )
