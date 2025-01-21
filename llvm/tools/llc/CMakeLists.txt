set(LLVM_LINK_COMPONENTS
  AllTargetsAsmParsers
  AllTargetsCodeGens
  AllTargetsDescs
  AllTargetsInfos
  Analysis
  AsmPrinter
  CodeGen
  CodeGenTypesV1
  CoreV1
  IRReaderV1
  MCV1
  MIRParser
  RemarksV1
  ScalarOpts
  SelectionDAG
  SupportV1
  TargetV1
  TargetParserV1
  TransformUtils
  Vectorize
  )

add_llvm_tool(llc
  llc.cpp

  DEPENDS
  intrinsics_gen
  SUPPORT_PLUGINS
  )

export_executable_symbols_for_plugins(llc)
