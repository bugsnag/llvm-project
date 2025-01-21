set(LLVM_LINK_COMPONENTS
  Analysis
  AsmParserV1
  CoreV1
  IPO
  SupportV1
  TargetParserV1
  TransformUtils
  )

add_llvm_unittest(IPOTests
  LowerTypeTests.cpp
  WholeProgramDevirt.cpp
  AttributorTest.cpp
  )

set_property(TARGET IPOTests PROPERTY FOLDER "Tests/UnitTests/TransformsTests")
