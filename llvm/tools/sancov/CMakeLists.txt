set(LLVM_LINK_COMPONENTS
  AllTargetsDescs
  AllTargetsDisassemblers
  AllTargetsInfos
  MCV1
  MCDisassembler
  ObjectV1
  SupportV1
  SymbolizeV1
  TargetParserV1
  )

add_llvm_tool(sancov
  sancov.cpp
  )
