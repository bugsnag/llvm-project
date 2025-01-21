set(LLVM_LINK_COMPONENTS
  CoreV1
  SupportV1
  )

add_llvm_tool(llvm-stress
  llvm-stress.cpp

  DEPENDS
  intrinsics_gen
  )
