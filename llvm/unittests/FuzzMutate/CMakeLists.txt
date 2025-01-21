set(LLVM_LINK_COMPONENTS
  AsmParserV1
  CoreV1
  FuzzMutate
  SupportV1
  )

add_llvm_unittest(FuzzMutateTests
  OperationsTest.cpp
  ReservoirSamplerTest.cpp
  StrategiesTest.cpp
  RandomIRBuilderTest.cpp
  )
