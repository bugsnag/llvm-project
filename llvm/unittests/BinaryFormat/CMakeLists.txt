set(LLVM_LINK_COMPONENTS
  BinaryFormatV1
  TargetParserV1
  )

add_llvm_unittest(BinaryFormatTests
  DwarfTest.cpp
  MachOTest.cpp
  MsgPackDocumentTest.cpp
  MsgPackReaderTest.cpp
  MsgPackWriterTest.cpp
  TestFileMagic.cpp
  )

