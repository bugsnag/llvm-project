set(LLVM_LINK_COMPONENTS
  AsmParserV1
  BitReaderV1
  BitWriter
  CoreV1
  SupportV1
  )

add_llvm_unittest(BitcodeTests
  BitReaderTest.cpp
  DataLayoutUpgradeTest.cpp
  )
