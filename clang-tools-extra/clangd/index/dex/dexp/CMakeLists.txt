set(LLVM_LINK_COMPONENTS
  LineEditor
  SupportV1
  )

add_clang_executable(dexp
  Dexp.cpp
  )

clang_target_link_libraries(dexp
  PRIVATE
  clangBasic
  )
target_link_libraries(dexp
  PRIVATE
  clangDaemon
  clangdRemoteIndex
  )
