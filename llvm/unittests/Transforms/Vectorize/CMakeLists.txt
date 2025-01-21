set(LLVM_LINK_COMPONENTS
  Analysis
  CoreV1
  Vectorize
  AsmParserV1
  TargetParserV1
  )

add_llvm_unittest(VectorizeTests
  VPlanTest.cpp
  VPDomTreeTest.cpp
  VPlanHCFGTest.cpp
  VPlanSlpTest.cpp
  VPlanVerifierTest.cpp
  )

set_property(TARGET VectorizeTests PROPERTY FOLDER "Tests/UnitTests/TransformsTests")
