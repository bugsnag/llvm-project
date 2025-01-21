add_llvm_component_library(LLVMOptionV1
  Arg.cpp
  ArgList.cpp
  Option.cpp
  OptTable.cpp

  ADDITIONAL_HEADER_DIRS
  ${LLVM_MAIN_INCLUDE_DIR}/llvm/Option

  LINK_COMPONENTS
  SupportV1
  )
