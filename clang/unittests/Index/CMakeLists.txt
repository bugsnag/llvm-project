set(LLVM_LINK_COMPONENTS
  ${LLVM_TARGETS_TO_BUILD}
  SupportV1
  )

add_clang_unittest(IndexTests
  IndexTests.cpp
  )

clang_target_link_libraries(IndexTests
  PRIVATE
  clangAST
  clangBasic
  clangFrontend
  clangIndex
  clangLex
  clangSerialization
  clangTooling
  )
