set(LLVM_LINK_COMPONENTS
  BinaryFormatV1
  InterfaceStub
  ObjectYAML
  OptionV1
  SupportV1
  TargetParserV1
  TextAPI
  )

set(LLVM_TARGET_DEFINITIONS Opts.td)
tablegen(LLVM Opts.inc -gen-opt-parser-defs)
add_public_tablegen_target(IFSOptsTableGen)

add_llvm_tool(llvm-ifs
  ErrorCollector.cpp
  llvm-ifs.cpp

DEPENDS
  IFSOptsTableGen

  GENERATE_DRIVER
  )
