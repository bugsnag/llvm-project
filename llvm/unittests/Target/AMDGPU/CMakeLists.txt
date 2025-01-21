include_directories(
  ${PROJECT_SOURCE_DIR}/lib/Target/AMDGPU
  ${PROJECT_BINARY_DIR}/lib/Target/AMDGPU
  )

set(LLVM_LINK_COMPONENTS
  AMDGPUCodeGen
  AMDGPUDesc
  AMDGPUInfo
  AMDGPUUtils
  CodeGen
  CodeGenTypesV1
  CoreV1
  MCV1
  SupportV1
  TargetParserV1
  )

add_llvm_target_unittest(AMDGPUTests
  AMDGPUUnitTests.cpp
  DwarfRegMappings.cpp
  ExecMayBeModifiedBeforeAnyUse.cpp
  )

set_property(TARGET AMDGPUTests PROPERTY FOLDER "Tests/UnitTests/TargetTests")
