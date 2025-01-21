add_llvm_component_library(LLVMSymbolizeV1
  DIPrinter.cpp
  Markup.cpp
  MarkupFilter.cpp
  SymbolizableObjectFile.cpp
  Symbolize.cpp
  BugsnagSymbolize.cpp

  ADDITIONAL_HEADER_DIRS
  ${LLVM_MAIN_INCLUDE_DIR}/llvm/DebugInfo/Symbolize

  LINK_COMPONENTS
  DebugInfoDWARFV1
  DebugInfoPDBV1
  ObjectV1
  SupportV1
  DemangleV1
  TargetParserV1
  )
