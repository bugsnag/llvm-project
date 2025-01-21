set(LLVM_LINK_COMPONENTS
  AllTargetsAsmParsers
  AllTargetsCodeGens
  AllTargetsDescs
  AllTargetsInfos
  BitReaderV1
  CodeGen
  CoreV1
  Linker
  LTO
  MCV1
  ObjectV1
  Passes
  SupportV1
  TargetV1
  TargetParserV1
  )

add_llvm_tool(llvm-lto2
  llvm-lto2.cpp

  DEPENDS
  intrinsics_gen
  )
export_executable_symbols_for_plugins(llvm-lto2)
