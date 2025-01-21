include_directories(
  ${LLVM_MAIN_SRC_DIR}/lib/Target/LoongArch
  ${LLVM_BINARY_DIR}/lib/Target/LoongArch
  )

set(LLVM_LINK_COMPONENTS
  CodeGen
  CodeGenTypesV1
  CoreV1
  LoongArchCodeGen
  LoongArchDesc
  LoongArchInfo
  MCV1
  MIRParser
  SelectionDAG
  SupportV1
  TargetV1
  TargetParserV1
  )

add_llvm_target_unittest(LoongArchTests
  InstSizes.cpp
  )

set_property(TARGET LoongArchTests PROPERTY FOLDER "Tests/UnitTests/TargetTests")
