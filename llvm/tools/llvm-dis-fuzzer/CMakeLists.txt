set(LLVM_LINK_COMPONENTS
  BitReaderV1
)
add_llvm_fuzzer(llvm-dis-fuzzer
  llvm-dis-fuzzer.cpp
  )
