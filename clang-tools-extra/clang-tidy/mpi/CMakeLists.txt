set(LLVM_LINK_COMPONENTS
  FrontendOpenMP
  SupportV1
  )

add_clang_library(clangTidyMPIModule
  BufferDerefCheck.cpp
  MPITidyModule.cpp
  TypeMismatchCheck.cpp

  LINK_LIBS
  clangTidy
  clangTidyUtils

  DEPENDS
  omp_gen
  )

clang_target_link_libraries(clangTidyMPIModule
  PRIVATE
  clangAnalysis
  clangAST
  clangASTMatchers
  clangBasic
  clangLex
  clangTooling
  clangStaticAnalyzerCheckers
  )
