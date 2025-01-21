set(LLVM_LINK_COMPONENTS
  OptionV1
  SupportV1
  )

set(LLVM_TARGET_DEFINITIONS Opts.td)

tablegen(LLVM Opts.inc -gen-opt-parser-defs)
add_public_tablegen_target(OptsTestTableGen)

add_llvm_unittest(OptionTests
  OptionParsingTest.cpp
  OptionMarshallingTest.cpp
  )
