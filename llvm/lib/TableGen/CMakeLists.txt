add_llvm_component_library(LLVMTableGenV1
  DetailedRecordsBackend.cpp
  Error.cpp
  JSONBackend.cpp
  Main.cpp
  Parser.cpp
  Record.cpp
  SetTheory.cpp
  StringMatcher.cpp
  TableGenBackend.cpp
  TableGenBackendSkeleton.cpp
  TGLexer.cpp
  TGParser.cpp

  ADDITIONAL_HEADER_DIRS
  ${LLVM_MAIN_INCLUDE_DIR}/llvm/TableGen

  LINK_COMPONENTS
  SupportV1
  )
