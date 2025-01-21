set(LLVM_LINK_COMPONENTS
  SupportV1
  )

add_clang_tool(diagtool
  diagtool_main.cpp
  DiagTool.cpp
  DiagnosticNames.cpp
  FindDiagnosticID.cpp
  ListWarnings.cpp
  ShowEnabledWarnings.cpp
  TreeView.cpp
)

clang_target_link_libraries(diagtool
  PRIVATE
  clangBasic
  clangFrontend
  )
