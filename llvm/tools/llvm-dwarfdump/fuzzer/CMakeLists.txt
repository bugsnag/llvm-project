set(LLVM_LINK_COMPONENTS
  DebugInfoDWARFV1
  ObjectV1
  SupportV1
  )

add_llvm_fuzzer(llvm-dwarfdump-fuzzer
  EXCLUDE_FROM_ALL
  llvm-dwarfdump-fuzzer.cpp
  )
