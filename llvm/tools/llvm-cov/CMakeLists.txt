set(LLVM_LINK_COMPONENTS
  CoreV1
  SupportV1
  ObjectV1
  Coverage
  ProfileData
  TargetParserV1
  )

add_llvm_tool(llvm-cov
  llvm-cov.cpp
  gcov.cpp
  CodeCoverage.cpp
  CoverageExporterJson.cpp
  CoverageExporterLcov.cpp
  CoverageFilters.cpp
  CoverageReport.cpp
  CoverageSummaryInfo.cpp
  SourceCoverageView.cpp
  SourceCoverageViewHTML.cpp
  SourceCoverageViewText.cpp
  TestingSupport.cpp
  )

target_link_libraries(llvm-cov PRIVATE LLVMDebuginfodV1)
