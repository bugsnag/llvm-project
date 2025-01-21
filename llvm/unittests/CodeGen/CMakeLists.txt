set(LLVM_LINK_COMPONENTS
  ${LLVM_TARGETS_TO_BUILD}
  Analysis
  AsmParserV1
  AsmPrinter
  CodeGen
  CodeGenTypesV1
  CoreV1
  FileCheck
  MCV1
  MIRParser
  Passes
  SelectionDAG
  SupportV1
  TargetV1
  TargetParserV1
  )

add_llvm_unittest(CodeGenTests
  AArch64SelectionDAGTest.cpp
  AllocationOrderTest.cpp
  AMDGPUMetadataTest.cpp
  AsmPrinterDwarfTest.cpp
  DIEHashTest.cpp
  DIETest.cpp
  DwarfStringPoolEntryRefTest.cpp
  InstrRefLDVTest.cpp
  LowLevelTypeTest.cpp
  LexicalScopesTest.cpp
  MachineInstrBundleIteratorTest.cpp
  MachineInstrTest.cpp
  MachineOperandTest.cpp
  RegAllocScoreTest.cpp
  PassManagerTest.cpp
  ScalableVectorMVTsTest.cpp
  SelectionDAGAddressAnalysisTest.cpp
  TypeTraitsTest.cpp
  TargetOptionsTest.cpp
  TestAsmPrinter.cpp
  MLRegallocDevelopmentFeatures.cpp
  )

add_subdirectory(GlobalISel)

target_link_libraries(CodeGenTests PRIVATE LLVMTestingSupport)
