set(LLVM_LINK_COMPONENTS
  ObjectV1
  SupportV1
  TextAPIV1
  )

add_llvm_tool(llvm-tapi-diff
  llvm-tapi-diff.cpp
  DiffEngine.cpp
  )
