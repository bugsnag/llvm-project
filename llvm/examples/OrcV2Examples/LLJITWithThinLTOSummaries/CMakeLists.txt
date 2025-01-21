set(LLVM_LINK_COMPONENTS
  BitReaderV1
  CoreV1
  ExecutionEngine
  OrcJIT
  OrcTargetProcess
  SupportV1
  TargetParserV1
  nativecodegen
  )

add_llvm_example(LLJITWithThinLTOSummaries
  LLJITWithThinLTOSummaries.cpp
  )

export_executable_symbols(LLJITWithThinLTOSummaries)
