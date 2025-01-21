set(LLVM_LINK_COMPONENTS
  DemangleV1
  SupportV1
  )

add_llvm_tool(llvm-undname
  llvm-undname.cpp
  )
