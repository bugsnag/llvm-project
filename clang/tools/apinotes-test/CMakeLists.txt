set(LLVM_LINK_COMPONENTS
  SupportV1)
add_clang_executable(apinotes-test
  APINotesTest.cpp
  )
clang_target_link_libraries(apinotes-test PRIVATE
  clangAPINotes)
