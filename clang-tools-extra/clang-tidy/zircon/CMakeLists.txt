set(LLVM_LINK_COMPONENTS
  FrontendOpenMP
  SupportV1
  )

add_clang_library(clangTidyZirconModule
  TemporaryObjectsCheck.cpp
  ZirconTidyModule.cpp

  LINK_LIBS
  clangTidy
  clangTidyUtils

  DEPENDS
  omp_gen
  )

clang_target_link_libraries(clangTidyZirconModule
  PRIVATE
  clangAST
  clangASTMatchers
  clangBasic
  clangLex
  )
