set(LLVM_LINK_COMPONENTS
  AsmParserV1
  CoreV1
  SupportV1
  )

add_llvm_unittest(AsmParserTests
  AsmParserTest.cpp
  )
