
set(LLVM_LINK_COMPONENTS
  AllTargetsDescs
  AllTargetsDisassemblers
  AllTargetsInfos
  DebugInfoDWARFV1
  CoreV1
  MCV1
  IPO
  MCDisassembler
  ObjectV1
  ProfileData
  SupportV1
  SymbolizeV1
  TargetParserV1
  )

add_llvm_tool(llvm-profgen
  llvm-profgen.cpp
  PerfReader.cpp
  CSPreInliner.cpp
  ProfiledBinary.cpp
  ProfileGenerator.cpp
  MissingFrameInferrer.cpp
  )
