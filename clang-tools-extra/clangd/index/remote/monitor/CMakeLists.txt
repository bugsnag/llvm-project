set(LLVM_LINK_COMPONENTS
  SupportV1
  )
add_clang_executable(clangd-index-server-monitor
  Monitor.cpp

  DEPENDS
  clangdRemoteIndexServiceProto
  )

target_link_libraries(clangd-index-server-monitor
  PRIVATE
  clangBasic
  clangdSupport

  clangdMonitoringServiceProto
  clangdRemoteIndexServiceProto
  )
