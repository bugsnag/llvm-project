include_directories(
  ${LLVM_MAIN_SRC_DIR}/lib/Target/AArch64
  ${LLVM_BINARY_DIR}/lib/Target/AArch64
  )

set(LLVM_LINK_COMPONENTS
  AArch64CodeGen
  AArch64Desc
  AArch64Info
  AArch64Utils
  AsmParserV1
  CodeGen
  CodeGenTypesV1
  CoreV1
  GlobalISel
  MCV1
  MIRParser
  SelectionDAG
  SupportV1
  TargetV1
  TargetParserV1
  )

add_llvm_target_unittest(AArch64Tests
  AArch64InstPrinterTest.cpp
  AddressingModes.cpp
  DecomposeStackOffsetTest.cpp
  InstSizes.cpp
  MatrixRegisterAliasing.cpp
  SMEAttributesTest.cpp
  )

set_property(TARGET AArch64Tests PROPERTY FOLDER "Tests/UnitTests/TargetTests")
