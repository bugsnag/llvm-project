set(LLVM_LINK_COMPONENTS
  AMDGPUCodeGen
  AMDGPUDesc
  AMDGPUInfo
  MCV1
  SupportV1
  TargetParserV1
  )

add_llvm_unittest(AMDGPUDwarfTests
  DwarfRegMappings.cpp
  )
