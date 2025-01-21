set(LLVM_LINK_COMPONENTS
  Analysis
  BinaryFormatV1
  BitReaderV1
  BitstreamReaderV1
  CoreV1
  DemangleV1
  MCV1
  MCParserV1
  ObjectV1
  OptionV1
  RemarksV1
  SupportV1
  TargetParserV1
  TextAPIV1
  )

set(LLVM_TARGET_DEFINITIONS Opts.td)
tablegen(LLVM Opts.inc -gen-opt-parser-defs)
add_public_tablegen_target(TLICheckerOptsTableGen)

add_llvm_tool(llvm-tli-checker
  llvm-tli-checker.cpp

  DEPENDS
  TLICheckerOptsTableGen
  )
