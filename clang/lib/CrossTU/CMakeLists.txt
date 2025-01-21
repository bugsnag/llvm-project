set(LLVM_LINK_COMPONENTS
  SupportV1
  TargetParserV1
  )

add_clang_library(clangCrossTU
  CrossTranslationUnit.cpp

  LINK_LIBS
  clangAST
  clangBasic
  clangFrontend
  clangIndex
  )
