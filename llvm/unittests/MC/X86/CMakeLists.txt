set(LLVM_LINK_COMPONENTS
  MCV1
  MCDisassembler
  TargetParserV1
  X86Desc
  X86Disassembler
  X86Info
  )

add_llvm_unittest(X86MCTests
  X86MCDisassemblerTest.cpp
  )
