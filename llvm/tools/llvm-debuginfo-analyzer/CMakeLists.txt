set(LLVM_LINK_COMPONENTS
  AllTargetsDescs
  AllTargetsDisassemblers
  AllTargetsInfos
  BinaryFormatV1
  DebugInfoCodeViewV1
  DebugInfoLogicalView
  DebugInfoPDBV1
  MCV1
  MCDisassembler
  ObjectV1
  SupportV1
  )

add_llvm_tool(llvm-debuginfo-analyzer
  llvm-debuginfo-analyzer.cpp
  Options.cpp
  )
