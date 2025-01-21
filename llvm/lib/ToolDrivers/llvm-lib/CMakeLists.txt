set(LLVM_LINK_COMPONENTS
  BinaryFormatV1
  BitReaderV1
  ObjectV1
  OptionV1
  SupportV1
  )

set(LLVM_TARGET_DEFINITIONS Options.td)
tablegen(LLVM Options.inc -gen-opt-parser-defs)
add_public_tablegen_target(LibOptionsTableGen)

add_llvm_component_library(LLVMLibDriver
  LibDriver.cpp

  DEPENDS
  intrinsics_gen

  LINK_COMPONENTS
  BinaryFormatV1
  BitReaderV1
  ObjectV1
  OptionV1
  SupportV1
  TargetParserV1
  )
add_dependencies(LLVMLibDriver LibOptionsTableGen)
