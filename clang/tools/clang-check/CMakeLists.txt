set( LLVM_LINK_COMPONENTS
  ${LLVM_TARGETS_TO_BUILD}
  OptionV1
  SupportV1
  )

add_clang_tool(clang-check
  ClangCheck.cpp
  )

clang_target_link_libraries(clang-check
  PRIVATE
  clangAST
  clangBasic
  clangDriver
  clangFrontend
  clangRewriteFrontend
  clangSerialization
  clangStaticAnalyzerFrontend
  clangTooling
  clangToolingSyntax
  )
