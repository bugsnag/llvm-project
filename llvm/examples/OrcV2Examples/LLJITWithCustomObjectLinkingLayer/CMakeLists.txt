set(LLVM_LINK_COMPONENTS
  CoreV1
  IRReaderV1
  JITLink
  OrcJIT
  SupportV1
  nativecodegen
  )

add_llvm_example(LLJITWithCustomObjectLinkingLayer
  LLJITWithCustomObjectLinkingLayer.cpp
  )

export_executable_symbols(LLJITWithCustomObjectLinkingLayer)
