include_directories(
  ${PROJECT_SOURCE_DIR}/lib/Target/X86
  ${PROJECT_BINARY_DIR}/lib/Target/X86
  )

set(LLVM_LINK_COMPONENTS
  Analysis
  AsmParserV1
  CodeGen
  CodeGenTypesV1
  CoreV1
  InstCombine
  MCV1
  MIRParser
  Passes
  SupportV1
  TargetV1
  TargetParserV1
  X86CodeGen
  X86Desc
  X86Info
  )

add_llvm_unittest(X86Tests
  MachineSizeOptsTest.cpp
  TernlogTest.cpp
  )

set_property(TARGET X86Tests PROPERTY FOLDER "Tests/UnitTests/TargetTests")
