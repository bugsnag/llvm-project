set(LLVM_LINK_COMPONENTS
  AllTargetsAsmParsers
  AllTargetsDescs
  AllTargetsDisassemblers
  AllTargetsInfos
  MCV1
  MCParserV1
  OptionV1
  SupportV1
  TargetParserV1
  )

set(LLVM_TARGET_DEFINITIONS Opts.td)

tablegen(LLVM Opts.inc -gen-opt-parser-defs)
add_public_tablegen_target(MLTableGen)

add_llvm_tool(llvm-ml
  llvm-ml.cpp
  Disassembler.cpp
  )
