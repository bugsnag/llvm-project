include_directories(
  ${LLVM_MAIN_SRC_DIR}/lib/Target/PowerPC
  ${LLVM_BINARY_DIR}/lib/Target/PowerPC
  )

set(LLVM_LINK_COMPONENTS
  CodeGenTypesV1
  CoreV1
  Exegesis
  MCV1
  PowerPC
  SupportV1
  TargetParserV1
  )

add_llvm_library(LLVMExegesisPowerPC
  DISABLE_LLVM_LINK_LLVM_DYLIB
  STATIC
  Target.cpp

  DEPENDS
  intrinsics_gen
  PowerPCCommonTableGen
  )
