set(LLVM_LINK_COMPONENTS
  SupportV1
  )

set(LLVM_EXPORTED_SYMBOL_FILE ${CMAKE_CURRENT_SOURCE_DIR}/CheckerDependencyHandlingAnalyzerPlugin.exports)
add_llvm_library(CheckerDependencyHandlingAnalyzerPlugin MODULE BUILDTREE_ONLY CheckerDependencyHandling.cpp)

clang_target_link_libraries(CheckerDependencyHandlingAnalyzerPlugin PRIVATE
  clangAnalysis
  clangAST
  clangStaticAnalyzerCore
  clangStaticAnalyzerFrontend
  )
