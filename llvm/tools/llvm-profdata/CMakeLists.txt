set(LLVM_LINK_COMPONENTS
  CoreV1
  ObjectV1
  ProfileData
  SupportV1
  )

add_llvm_tool(llvm-profdata
  llvm-profdata.cpp

  DEPENDS
  intrinsics_gen
  GENERATE_DRIVER
  )
