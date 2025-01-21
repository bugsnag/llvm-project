set(LLVM_LINK_COMPONENTS
  SupportV1
  )

add_llvm_unittest(TestingADTTests
  StringMapEntryTest.cpp
  StringMapTest.cpp
  )
