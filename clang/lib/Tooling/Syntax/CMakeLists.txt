set(LLVM_LINK_COMPONENTS SupportV1)

add_clang_library(clangToolingSyntax
  BuildTree.cpp
  ComputeReplacements.cpp
  Nodes.cpp
  Mutations.cpp
  TokenBufferTokenManager.cpp
  Synthesis.cpp
  Tokens.cpp
  Tree.cpp

  LINK_LIBS
  clangAST
  clangBasic
  clangFrontend
  clangLex
  clangToolingCore

  DEPENDS
  omp_gen
  )
