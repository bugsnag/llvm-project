set(LLVM_LINK_COMPONENTS
  Analysis
  CoreV1
  FrontendOpenACC
  FrontendOpenMP
  Passes
  SupportV1
  TargetParserV1
  TransformUtils
  )

add_llvm_unittest(LLVMFrontendTests
  OpenACCTest.cpp
  OpenMPContextTest.cpp
  OpenMPIRBuilderTest.cpp
  OpenMPParsingTest.cpp

  DEPENDS
  acc_gen
  omp_gen
  )

target_link_libraries(LLVMFrontendTests PRIVATE LLVMTestingSupport)
