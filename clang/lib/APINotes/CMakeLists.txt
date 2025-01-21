set(LLVM_LINK_COMPONENTS
  SupportV1)
add_clang_library(clangAPINotes
  APINotesTypes.cpp
  APINotesYAMLCompiler.cpp
  LINK_LIBS
    clangBasic)
