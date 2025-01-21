set(LLVM_LINK_COMPONENTS
  ${LLVM_TARGETS_TO_BUILD}
  SupportV1
  )

add_clang_unittest(CrossTUTests
  CrossTranslationUnitTest.cpp
  )

clang_target_link_libraries(CrossTUTests
  PRIVATE
  clangAST
  clangBasic
  clangCrossTU
  clangFrontend
  clangSerialization
  clangTooling
  )
