set(LLVM_LINK_COMPONENTS
  CoreV1
  IRReaderV1
  JITLink
  OrcJIT
  SupportV1
  nativecodegen
  )

add_llvm_example(LLJITWithObjectLinkingLayerPlugin
  LLJITWithObjectLinkingLayerPlugin.cpp
  )

export_executable_symbols(LLJITWithObjectLinkingLayerPlugin)
