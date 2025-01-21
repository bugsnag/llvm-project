set(LLVM_LINK_COMPONENTS
  ${LLVM_TARGETS_TO_BUILD}
  JITLink
  ObjectV1
  OrcShared
  SupportV1
  TargetParserV1
  )

add_llvm_unittest(JITLinkTests
    AArch32Tests.cpp
    EHFrameSupportTests.cpp
    LinkGraphTests.cpp
  )

target_link_libraries(JITLinkTests PRIVATE LLVMTestingSupport)

set_property(TARGET JITLinkTests PROPERTY FOLDER "Tests/UnitTests/ExecutionTests")
