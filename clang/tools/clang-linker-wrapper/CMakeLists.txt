set(LLVM_LINK_COMPONENTS
  ${LLVM_TARGETS_TO_BUILD}
  BitWriter
  CoreV1
  BinaryFormatV1
  MCV1
  TargetV1
  TransformUtils
  Analysis
  Passes
  IRReaderV1
  ObjectV1
  OptionV1
  SupportV1
  TargetParserV1
  CodeGen
  LTO
  )

set(LLVM_TARGET_DEFINITIONS LinkerWrapperOpts.td)
tablegen(LLVM LinkerWrapperOpts.inc -gen-opt-parser-defs)
add_public_tablegen_target(LinkerWrapperOpts)

if(NOT CLANG_BUILT_STANDALONE)
  set(tablegen_deps intrinsics_gen LinkerWrapperOpts)
endif()

add_clang_tool(clang-linker-wrapper
  ClangLinkerWrapper.cpp
  OffloadWrapper.cpp

  DEPENDS
  ${tablegen_deps}
  )

set(CLANG_LINKER_WRAPPER_LIB_DEPS
  clangBasic
  )

target_link_libraries(clang-linker-wrapper
  PRIVATE
  ${CLANG_LINKER_WRAPPER_LIB_DEPS}
  )
