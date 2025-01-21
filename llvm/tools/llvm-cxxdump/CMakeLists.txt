set(LLVM_LINK_COMPONENTS
  AllTargetsInfos
  MCV1
  ObjectV1
  SupportV1
  )

add_llvm_tool(llvm-cxxdump
  llvm-cxxdump.cpp
  Error.cpp
  )
