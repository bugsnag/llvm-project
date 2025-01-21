set(LLVM_LINK_COMPONENTS
  FrontendOpenMP
  SupportV1
  )

add_clang_unittest(IntrospectionTests
  IntrospectionTest.cpp
  )

clang_target_link_libraries(IntrospectionTests
  PRIVATE
  clangAST
  clangASTMatchers
  clangBasic
  clangFrontend
  clangSerialization
  clangTooling
  )
target_link_libraries(IntrospectionTests
  PRIVATE
  LLVMTestingSupport
)
