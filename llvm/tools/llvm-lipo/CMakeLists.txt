set(LLVM_LINK_COMPONENTS
  ${LLVM_TARGETS_TO_BUILD}
  ObjectV1
  OptionV1
  SupportV1
  TargetParserV1
  TextAPIV1
  CoreV1
  BinaryFormatV1
)

set(LLVM_TARGET_DEFINITIONS LipoOpts.td)
tablegen(LLVM LipoOpts.inc -gen-opt-parser-defs)
add_public_tablegen_target(LipoOptsTableGen)

add_llvm_tool(llvm-lipo
  llvm-lipo.cpp
  DEPENDS
  LipoOptsTableGen
  GENERATE_DRIVER
)

if(LLVM_INSTALL_CCTOOLS_SYMLINKS)
  add_llvm_tool_symlink(lipo llvm-lipo)
endif()
