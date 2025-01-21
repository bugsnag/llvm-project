set(LLVM_LINK_COMPONENTS
  DebugInfoDWARFV1
  DemangleV1
  MCV1
  MCDisassembler
  ObjectV1
  SupportV1
  TargetParserV1
  )

add_llvm_library(LLVMBOLTCore
  BinaryBasicBlock.cpp
  BinaryContext.cpp
  BinaryData.cpp
  BinaryEmitter.cpp
  BinaryFunction.cpp
  BinaryFunctionProfile.cpp
  BinarySection.cpp
  DebugData.cpp
  DynoStats.cpp
  Exceptions.cpp
  FunctionLayout.cpp
  HashUtilities.cpp
  JumpTable.cpp
  MCPlusBuilder.cpp
  ParallelUtilities.cpp
  Relocation.cpp

  DISABLE_LLVM_LINK_LLVM_DYLIB
  LINK_LIBS
  ${LLVM_PTHREAD_LIB}
  )

target_link_libraries(LLVMBOLTCore
  PRIVATE
  LLVMBOLTUtils
  )
