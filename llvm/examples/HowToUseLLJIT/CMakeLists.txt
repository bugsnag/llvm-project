set(LLVM_LINK_COMPONENTS
  CoreV1
  OrcJIT
  SupportV1
  nativecodegen
  )

add_llvm_example(HowToUseLLJIT
  HowToUseLLJIT.cpp
  )

export_executable_symbols(HowToUseLLJIT)
