set(LLVM_LINK_COMPONENTS
  BitReaderV1
  BitstreamReaderV1
  SupportV1
  TargetParserV1
  )


add_clang_library(clangSerialization
  ASTCommon.cpp
  ASTReader.cpp
  ASTReaderDecl.cpp
  ASTReaderStmt.cpp
  ASTWriter.cpp
  ASTWriterDecl.cpp
  ASTWriterStmt.cpp
  GeneratePCH.cpp
  GlobalModuleIndex.cpp
  InMemoryModuleCache.cpp
  ModuleFile.cpp
  ModuleFileExtension.cpp
  ModuleManager.cpp
  PCHContainerOperations.cpp

  ADDITIONAL_HEADERS
  ASTCommon.h
  ASTReaderInternals.h

  LINK_LIBS
  clangAST
  clangBasic
  clangLex
  clangSema

  DEPENDS
  omp_gen
  )
