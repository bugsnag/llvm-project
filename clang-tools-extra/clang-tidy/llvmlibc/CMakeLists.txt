set(LLVM_LINK_COMPONENTS
  FrontendOpenMP
  SupportV1
  )

add_clang_library(clangTidyLLVMLibcModule
  CalleeNamespaceCheck.cpp
  ImplementationInNamespaceCheck.cpp
  InlineFunctionDeclCheck.cpp
  LLVMLibcTidyModule.cpp
  RestrictSystemLibcHeadersCheck.cpp

  LINK_LIBS
  clangTidy
  clangTidyPortabilityModule
  clangTidyUtils

  DEPENDS
  omp_gen
  )

clang_target_link_libraries(clangTidyLLVMLibcModule
  PRIVATE
  clangAST
  clangASTMatchers
  clangBasic
  clangLex
  clangTooling
  )
