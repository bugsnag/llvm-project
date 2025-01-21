add_llvm_component_library(LLVMDWARFLinkerParallel
  DWARFLinker.cpp
  StringPool.cpp

  ADDITIONAL_HEADER_DIRS
  ${LLVM_MAIN_INCLUDE_DIR}/llvm/DWARFLinkerParallel

  DEPENDS
  intrinsics_gen

  LINK_COMPONENTS
  AsmPrinter
  BinaryFormatV1
  CodeGenV1
  DebugInfoDWARFV1
  MCV1
  ObjectV1
  SupportV1
  )
