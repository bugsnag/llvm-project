set(LLVM_LINK_COMPONENTS
  AllTargetsAsmParsers
  AllTargetsDescs
  AllTargetsDisassemblers
  AllTargetsInfos
  MCV1
  MCParser
  SupportV1
  TargetParserV1
  )

add_llvm_tool(llvm-mc
  llvm-mc.cpp
  Disassembler.cpp
  )
