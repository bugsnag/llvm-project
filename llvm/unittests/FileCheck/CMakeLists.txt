set(LLVM_LINK_COMPONENTS
  FileCheck
  SupportV1
)

add_llvm_unittest(FileCheckTests
  FileCheckTest.cpp
)

target_link_libraries(FileCheckTests PRIVATE LLVMTestingSupport)
