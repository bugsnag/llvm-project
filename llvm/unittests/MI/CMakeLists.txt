set(LLVM_LINK_COMPONENTS
  ${LLVM_TARGETS_TO_BUILD}
  CodeGen
  CodeGenTypesV1
  CoreV1
  MCV1
  MIRParser
  SupportV1
  TargetV1
  TargetParserV1
  )

add_llvm_unittest(MITests
  LiveIntervalTest.cpp
  )
