set(LLVM_LINK_COMPONENTS 
  ${LLVM_TARGETS_TO_BUILD}
  BinaryFormatV1
  ObjectV1
  SupportV1)

add_clang_tool(clang-offload-packager
  ClangOffloadPackager.cpp

  DEPENDS
  ${tablegen_deps}
  )

clang_target_link_libraries(clang-offload-packager
  PRIVATE
  clangBasic
  )
