set(LLVM_LINK_COMPONENTS
  SupportV1
  FuzzerCLI
)

add_llvm_fuzzer(llvm-yaml-numeric-parser-fuzzer
  yaml-numeric-parser-fuzzer.cpp
  DUMMY_MAIN DummyYAMLNumericParserFuzzer.cpp
  )
