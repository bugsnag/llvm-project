add_llvm_component_library(LLVMProfileData
  GCOV.cpp
  InstrProf.cpp
  InstrProfCorrelator.cpp
  InstrProfReader.cpp
  InstrProfWriter.cpp
  ItaniumManglingCanonicalizer.cpp
  MemProf.cpp
  ProfileSummaryBuilder.cpp
  RawMemProfReader.cpp
  SampleProf.cpp
  SampleProfReader.cpp
  SampleProfWriter.cpp
  SymbolRemappingReader.cpp

  ADDITIONAL_HEADER_DIRS
  ${LLVM_MAIN_INCLUDE_DIR}/llvm/ProfileData

  DEPENDS
  intrinsics_gen

  LINK_COMPONENTS
  CoreV1
  ObjectV1
  SupportV1
  DemangleV1
  SymbolizeV1
  DebugInfoDWARFV1
  TargetParserV1
  )

add_subdirectory(Coverage)
