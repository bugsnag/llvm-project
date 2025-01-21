set(LLVM_LINK_COMPONENTS
  FuzzerCLI
  SupportV1
)
add_llvm_fuzzer(mlir-bytecode-parser-fuzzer
  mlir-bytecode-parser-fuzzer.cpp
  DUMMY_MAIN DummyParserFuzzer.cpp
)
target_link_libraries(mlir-bytecode-parser-fuzzer
  PUBLIC
  MLIRIR
  MLIRParser
  MLIRSupport
)

