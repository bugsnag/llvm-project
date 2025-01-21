set(LLVM_LINK_COMPONENTS
  SupportV1
  )

add_clang_tool(pp-trace
  PPTrace.cpp
  PPCallbacksTracker.cpp
  )

clang_target_link_libraries(pp-trace
  PRIVATE
  clangAST
  clangBasic
  clangFrontend
  clangLex
  clangSerialization
  clangTooling
  )
