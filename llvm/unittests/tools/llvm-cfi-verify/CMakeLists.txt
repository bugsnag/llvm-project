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
  TargetParserV1
  )

add_llvm_unittest(CFIVerifyTests
  FileAnalysis.cpp
  GraphBuilder.cpp
  )
target_link_libraries(CFIVerifyTests PRIVATE LLVMCFIVerify)

set_property(TARGET CFIVerifyTests PROPERTY FOLDER "Tests/UnitTests/ToolTests")
