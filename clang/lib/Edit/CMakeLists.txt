set(LLVM_LINK_COMPONENTS
  SupportV1
  )

add_clang_library(clangEdit
  Commit.cpp
  EditedSource.cpp
  RewriteObjCFoundationAPI.cpp

  LINK_LIBS
  clangAST
  clangBasic
  clangLex
  )
