set(LLVM_LINK_COMPONENTS
  BitstreamReaderV1
  )

add_llvm_unittest(BitstreamTests
  BitstreamReaderTest.cpp
  BitstreamWriterTest.cpp
  )
