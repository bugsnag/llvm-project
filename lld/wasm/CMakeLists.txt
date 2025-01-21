set(LLVM_TARGET_DEFINITIONS Options.td)
tablegen(LLVM Options.inc -gen-opt-parser-defs)
add_public_tablegen_target(WasmOptionsTableGen)

add_lld_library(lldWasm
  Driver.cpp
  InputChunks.cpp
  InputFiles.cpp
  LTO.cpp
  MapFile.cpp
  MarkLive.cpp
  OutputSections.cpp
  OutputSegment.cpp
  Relocations.cpp
  SymbolTable.cpp
  Symbols.cpp
  SyntheticSections.cpp
  Writer.cpp
  WriterUtils.cpp

  LINK_COMPONENTS
  ${LLVM_TARGETS_TO_BUILD}
  BinaryFormatV1
  CoreV1
  DemangleV1
  LTO
  MCV1
  ObjectV1
  OptionV1
  Passes
  SupportV1
  TargetParserV1

  LINK_LIBS
  lldCommon

  DEPENDS
  WasmOptionsTableGen
  intrinsics_gen
  )
