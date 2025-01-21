set(LLVM_LINK_COMPONENTS
  DemangleV1
  FuzzerCLI
  SupportV1
)

add_llvm_fuzzer(llvm-microsoft-demangle-fuzzer
  llvm-microsoft-demangle-fuzzer.cpp
  DUMMY_MAIN DummyDemanglerFuzzer.cpp
  )
