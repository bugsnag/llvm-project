set(LLVM_LINK_COMPONENTS
  SupportV1
  )

add_clang_unittest(ClangSupportTests
  TimeProfilerTest.cpp
  )

clang_target_link_libraries(ClangSupportTests
  PRIVATE
  clangAST
  clangBasic
  clangFrontend
  clangSerialization
  )
