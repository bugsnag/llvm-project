set(LLVM_LINK_COMPONENTS
  SupportV1
  FuzzerCLI
)

add_llvm_fuzzer(llvm-yaml-parser-fuzzer
  yaml-parser-fuzzer.cpp
  DUMMY_MAIN DummyYAMLParserFuzzer.cpp
  )
