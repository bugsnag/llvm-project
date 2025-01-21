set(LLVM_LINK_COMPONENTS
  ${LLVM_TARGETS_TO_BUILD}
  AsmPrinter
  BinaryFormatV1
  CodeGenTypesV1
  DebugInfoDWARFV1
  MCV1
  ObjectV1
  ObjectYAML
  SupportV1
  TargetParserV1
  )

add_llvm_unittest(DebugInfoDWARFTests
  DwarfGenerator.cpp
  DwarfUtils.cpp
  DWARFAcceleratorTableTest.cpp
  DWARFDataExtractorTest.cpp
  DWARFDebugArangeSetTest.cpp
  DWARFDebugFrameTest.cpp
  DWARFDebugInfoTest.cpp
  DWARFDebugLineTest.cpp
  DWARFDieTest.cpp
  DWARFDieManualExtractTest.cpp
  DWARFExpressionCopyBytesTest.cpp
  DWARFExpressionCompactPrinterTest.cpp
  DWARFFormValueTest.cpp
  DWARFListTableTest.cpp
  DWARFLocationExpressionTest.cpp
  )

target_link_libraries(DebugInfoDWARFTests PRIVATE LLVMTestingSupport)

set_property(TARGET DebugInfoDWARFTests PROPERTY FOLDER "Tests/UnitTests/DebugInfoTests")
