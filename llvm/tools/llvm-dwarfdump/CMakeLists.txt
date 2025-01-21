set(LLVM_LINK_COMPONENTS
  DebugInfoDWARFV1
  AllTargetsDescs
  AllTargetsInfos
  MCV1
  ObjectV1
  SupportV1
  TargetParserV1
  )

add_llvm_tool(llvm-dwarfdump
  SectionSizes.cpp
  Statistics.cpp
  llvm-dwarfdump.cpp
  )

add_subdirectory(fuzzer)
