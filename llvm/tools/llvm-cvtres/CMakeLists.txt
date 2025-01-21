set(LLVM_LINK_COMPONENTS
  BinaryFormatV1
  ObjectV1
  OptionV1
  SupportV1
  )

set(LLVM_TARGET_DEFINITIONS Opts.td)

tablegen(LLVM Opts.inc -gen-opt-parser-defs)
add_public_tablegen_target(CvtResTableGen)

add_llvm_tool(llvm-cvtres
  llvm-cvtres.cpp
  )
