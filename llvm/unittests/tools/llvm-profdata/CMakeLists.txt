set(LLVM_LINK_COMPONENTS
  CoreV1
  ProfileData
  SupportV1
  )

add_llvm_unittest(LLVMProfdataTests
    OutputSizeLimitTest.cpp
  )

target_link_libraries(LLVMProfdataTests PRIVATE LLVMTestingSupport)

set_property(TARGET LLVMProfdataTests PROPERTY FOLDER "Tests/UnitTests/ToolTests")
