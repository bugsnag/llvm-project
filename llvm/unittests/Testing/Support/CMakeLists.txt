set(LLVM_LINK_COMPONENTS
  SupportV1
  TestingSupport
  )

add_llvm_unittest(TestingSupportTests
  TempPathTest.cpp
  )

target_link_libraries(TestingSupportTests PRIVATE LLVMTestingSupport)
