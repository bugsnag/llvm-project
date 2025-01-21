set(LLVM_LINK_COMPONENTS
    DebugInfoDWARFV1
    MCV1
    MCParserV1
    ObjectV1
    SupportV1
    SymbolizeV1
    TargetParserV1
    )

add_llvm_library(LLVMCFIVerify
  STATIC
  FileAnalysis.cpp
  FileAnalysis.h
  GraphBuilder.cpp
  GraphBuilder.h
  )
