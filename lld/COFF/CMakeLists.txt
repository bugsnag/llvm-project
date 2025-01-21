set(LLVM_TARGET_DEFINITIONS Options.td)
tablegen(LLVM Options.inc -gen-opt-parser-defs)
add_public_tablegen_target(COFFOptionsTableGen)

add_lld_library(lldCOFF
  CallGraphSort.cpp
  Chunks.cpp
  COFFLinkerContext.cpp
  DebugTypes.cpp
  DLL.cpp
  Driver.cpp
  DriverUtils.cpp
  ICF.cpp
  InputFiles.cpp
  LLDMapFile.cpp
  LTO.cpp
  MapFile.cpp
  MarkLive.cpp
  MinGW.cpp
  PDB.cpp
  SymbolTable.cpp
  Symbols.cpp
  Writer.cpp

  LINK_COMPONENTS
  ${LLVM_TARGETS_TO_BUILD}
  BinaryFormatV1
  CoreV1
  DebugInfoCodeViewV1
  DebugInfoDWARFV1
  DebugInfoMSFV1
  DebugInfoPDBV1
  DemangleV1
  LibDriver
  LTO
  MCV1
  ObjectV1
  OptionV1
  Passes
  SupportV1
  TargetParserV1
  WindowsDriver
  WindowsManifest

  LINK_LIBS
  lldCommon
  ${LLVM_PTHREAD_LIB}
  ${LLVM_ATOMIC_LIB}

  DEPENDS
  COFFOptionsTableGen
  intrinsics_gen
  )
