set(LLVM_LINK_COMPONENTS
  ObjectV1
  SupportV1
  )
add_llvm_tool(llvm-debuginfod-find
  llvm-debuginfod-find.cpp
  )
target_link_libraries(llvm-debuginfod-find PRIVATE LLVMDebuginfodV1)
if(LLVM_INSTALL_BINUTILS_SYMLINKS)
  add_llvm_tool_symlink(debuginfod-find llvm-debuginfod-find)
endif()
