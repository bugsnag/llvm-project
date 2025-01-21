add_llvm_component_library(LLVMDWARFLinker
  DWARFLinkerCompileUnit.cpp
  DWARFLinkerDeclContext.cpp
  DWARFLinker.cpp
  DWARFStreamer.cpp

  ADDITIONAL_HEADER_DIRS
  ${LLVM_MAIN_INCLUDE_DIR}/llvm/DWARFLinker

  DEPENDS
  intrinsics_gen

  LINK_COMPONENTS
  AsmPrinterV1
  BinaryFormatV1
  CodeGen
  CodeGenTypesV1
  DebugInfoDWARFV1
  MCV1
  ObjectV1
  SupportV1
  TargetParserV1
  )
