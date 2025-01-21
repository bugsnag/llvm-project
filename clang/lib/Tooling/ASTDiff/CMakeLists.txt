set(LLVM_LINK_COMPONENTS
  SupportV1
  )

add_clang_library(clangToolingASTDiff
  ASTDiff.cpp
  LINK_LIBS
  clangBasic
  clangAST
  clangLex

  DEPENDS
  omp_gen
  )
