include_directories(
  ${PROJECT_SOURCE_DIR}/lib/Target/PowerPC
  ${PROJECT_BINARY_DIR}/lib/Target/PowerPC
  )

set(LLVM_LINK_COMPONENTS
  MCV1
  SupportV1
  TargetV1
  TargetParserV1
  PowerPCCodeGen
  PowerPCDesc
  PowerPCInfo
  )

add_llvm_unittest(PowerPCTests
  AIXRelocModelTest.cpp
  )

set_property(TARGET PowerPCTests PROPERTY FOLDER "Tests/UnitTests/TargetTests")
