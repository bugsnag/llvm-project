set(LLVM_LINK_COMPONENTS
  SupportV1
  )

add_clang_library(clangRewrite
  DeltaTree.cpp
  HTMLRewrite.cpp
  RewriteRope.cpp
  Rewriter.cpp
  TokenRewriter.cpp

  LINK_LIBS
  clangBasic
  clangLex
  )
