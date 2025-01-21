set(LLVM_LINK_COMPONENTS
    AllTargetsAsmParsers
    AllTargetsDescs
    AllTargetsInfos
    MCV1
    MCParserV1
    SupportV1
    TargetParserV1
)

add_llvm_fuzzer(llvm-mc-assemble-fuzzer
  llvm-mc-assemble-fuzzer.cpp
  )
