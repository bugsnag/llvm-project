set(LLVM_LINK_COMPONENTS SupportV1)

include_directories("../lib") # FIXME: use public APIs instead.
add_clang_tool(clang-include-cleaner IncludeCleaner.cpp)
clang_target_link_libraries(clang-include-cleaner PRIVATE
  clangBasic
  clangFrontend
  clangLex
  clangFormat
  clangSerialization
  clangTooling
  )
target_link_libraries(clang-include-cleaner PRIVATE
  clangIncludeCleaner
  )

