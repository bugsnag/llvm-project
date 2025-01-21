set(LLVM_LINK_COMPONENTS
  ${LLVM_TARGETS_TO_BUILD}
  CodeGen
  CodeGenTypesV1
  CoreV1
  FileCheck
  MCV1
  MIRParser
  SupportV1
  TargetV1
  TargetParserV1
  )

add_llvm_unittest(MIRTests
  MachineMetadata.cpp
  )

target_link_libraries(MIRTests PRIVATE LLVMTestingSupport)
