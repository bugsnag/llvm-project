set(LLVM_LINK_COMPONENTS SupportV1)

add_clang_library(clangIncludeCleaner
  Analysis.cpp
  FindHeaders.cpp
  HTMLReport.cpp
  LocateSymbol.cpp
  Record.cpp
  Types.cpp
  WalkAST.cpp
  )

clang_target_link_libraries(clangIncludeCleaner
  PRIVATE
  clangAST
  clangBasic
  clangFormat
  clangLex
  clangToolingCore
  clangToolingInclusions
  clangToolingInclusionsStdlib
  )

