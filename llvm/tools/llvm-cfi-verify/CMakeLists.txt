set(LLVM_LINK_COMPONENTS
  AllTargetsAsmParsers
  AllTargetsDescs
  AllTargetsDisassemblers
  AllTargetsInfos
  MCV1
  MCParserV1
  ObjectV1
  SupportV1
  SymbolizeV1
  )

add_llvm_tool(llvm-cfi-verify
  llvm-cfi-verify.cpp
  )

add_subdirectory(lib)
target_link_libraries(llvm-cfi-verify PRIVATE LLVMCFIVerify)
