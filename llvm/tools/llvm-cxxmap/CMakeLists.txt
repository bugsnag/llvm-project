set(LLVM_LINK_COMPONENTS
  CoreV1
  SupportV1
  ProfileData
  )

add_llvm_tool(llvm-cxxmap
  llvm-cxxmap.cpp
  )
