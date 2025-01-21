set(LLVM_LINK_COMPONENTS
  Analysis
  AsmParserV1
  CoreV1
  Coroutines
  Passes
  SupportV1
  TargetParserV1
  TransformUtils
  )

add_llvm_unittest(CoroTests
  ExtraRematTest.cpp
  )

target_link_libraries(CoroTests PRIVATE LLVMTestingSupport)

set_property(TARGET CoroTests PROPERTY FOLDER "Tests/UnitTests/TransformTests")
