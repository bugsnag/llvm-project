set(LLVM_LINK_COMPONENTS
  SupportV1
  )

add_clang_unittest(RewriteTests
  RewriteBufferTest.cpp
  RewriterTest.cpp
  )
clang_target_link_libraries(RewriteTests
  PRIVATE
  clangFrontend
  clangRewrite
  clangSerialization
  clangTooling
  )
