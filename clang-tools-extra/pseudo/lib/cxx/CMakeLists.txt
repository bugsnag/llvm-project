set(LLVM_LINK_COMPONENTS
  SupportV1
  )

add_clang_library(clangPseudoCXX
  CXX.cpp

  DEPENDS
  cxx_gen

  LINK_LIBS
  clangBasic
  clangPseudo
  clangPseudoGrammar
  )
