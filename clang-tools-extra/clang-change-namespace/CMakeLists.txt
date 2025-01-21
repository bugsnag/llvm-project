set(LLVM_LINK_COMPONENTS
  FrontendOpenMP
  SupportV1
  )

add_clang_library(clangChangeNamespace
  ChangeNamespace.cpp

  DEPENDS
  omp_gen
)

clang_target_link_libraries(clangChangeNamespace
  PRIVATE
  clangAST
  clangASTMatchers
  clangBasic
  clangFormat
  clangFrontend
  clangLex
  clangSerialization
  clangTooling
  clangToolingCore
  )

add_subdirectory(tool)
