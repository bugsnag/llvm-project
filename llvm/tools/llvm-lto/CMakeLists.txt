set(LLVM_LINK_COMPONENTS
  AllTargetsAsmParsers
  AllTargetsCodeGens
  AllTargetsDescs
  AllTargetsInfos
  BitReaderV1
  BitWriter
  CodeGen
  CoreV1
  IRReaderV1
  IPO
  LTO
  MCV1
  ObjectV1
  SupportV1
  TargetV1
  TargetParserV1
  )

add_llvm_tool(llvm-lto
  llvm-lto.cpp

  DEPENDS intrinsics_gen
  )
