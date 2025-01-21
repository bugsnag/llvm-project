set(LLVM_LINK_COMPONENTS
  FrontendOpenMP
  SupportV1
  TargetParserV1
  )

add_clang_library(clangTidyPortabilityModule
  PortabilityTidyModule.cpp
  RestrictSystemIncludesCheck.cpp
  SIMDIntrinsicsCheck.cpp
  StdAllocatorConstCheck.cpp

  LINK_LIBS
  clangTidy
  clangTidyUtils

  DEPENDS
  omp_gen
  )

clang_target_link_libraries(clangTidyPortabilityModule
  PRIVATE
  clangAST
  clangASTMatchers
  clangBasic
  clangLex
  clangTooling
  )
