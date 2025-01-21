include_directories(
  ${LLVM_MAIN_SRC_DIR}/lib/Target/SystemZ
  )

set(LLVM_LINK_COMPONENTS
  SystemZ
  MCParserV1
  MCV1
  SupportV1
  TargetParserV1
  )

add_llvm_unittest(SystemZAsmLexerTests
  SystemZAsmLexerTest.cpp
  )
