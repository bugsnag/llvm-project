set(LLVM_LINK_COMPONENTS
  Analysis
  BitWriter
  CoreV1
  IPO
  IRReaderV1
  IRPrinter
  Passes
  SupportV1
  )

add_llvm_tool(llvm-extract
  llvm-extract.cpp

  DEPENDS
  intrinsics_gen
  )
