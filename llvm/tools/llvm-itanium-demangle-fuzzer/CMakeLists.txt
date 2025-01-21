set(LLVM_LINK_COMPONENTS
  DemangleV1
  FuzzerCLI
  SupportV1
)

add_llvm_fuzzer(llvm-itanium-demangle-fuzzer
  llvm-itanium-demangle-fuzzer.cpp
  DUMMY_MAIN DummyDemanglerFuzzer.cpp
  )
