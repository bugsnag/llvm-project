set(LLVM_LINK_COMPONENTS
  DemangleV1
  FuzzerCLI
  SupportV1
)

add_llvm_fuzzer(llvm-rust-demangle-fuzzer
  llvm-rust-demangle-fuzzer.cpp
  DUMMY_MAIN DummyDemanglerFuzzer.cpp
  )
