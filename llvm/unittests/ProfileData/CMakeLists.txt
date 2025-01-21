set(LLVM_LINK_COMPONENTS
  CoreV1
  Coverage
  ProfileData
  SupportV1
  ObjectV1
  )

add_llvm_unittest(ProfileDataTests
  CoverageMappingTest.cpp
  InstrProfDataTest.cpp
  InstrProfTest.cpp
  ItaniumManglingCanonicalizerTest.cpp
  MemProfTest.cpp
  SampleProfTest.cpp
  SymbolRemappingReaderTest.cpp
  )

target_link_libraries(ProfileDataTests PRIVATE LLVMTestingSupport)
