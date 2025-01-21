include_directories(
  ${LLVM_MAIN_SRC_DIR}/lib/Target/ARM
  ${LLVM_BINARY_DIR}/lib/Target/ARM
  )

set(LLVM_LINK_COMPONENTS
  ARMCodeGen
  ARMDesc
  ARMInfo
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

add_llvm_target_unittest(ARMTests
  MachineInstrTest.cpp
  InstSizes.cpp
  )

set_property(TARGET ARMTests PROPERTY FOLDER "Tests/UnitTests/TargetTests")
