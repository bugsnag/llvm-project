set(LLVM_LINK_COMPONENTS
  BitReaderV1
  RemarksV1
  SupportV1
  )

add_llvm_unittest(RemarksTests
  BitstreamRemarksFormatTest.cpp
  BitstreamRemarksParsingTest.cpp
  BitstreamRemarksSerializerTest.cpp
  RemarksAPITest.cpp
  RemarksLinkingTest.cpp
  RemarksStrTabParsingTest.cpp
  YAMLRemarksParsingTest.cpp
  YAMLRemarksSerializerTest.cpp
  )
