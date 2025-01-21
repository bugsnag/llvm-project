set(LLVM_LINK_COMPONENTS
  CodeGenTypesV1
  SupportV1
  TableGenV1
  )

add_llvm_library(LLVMTableGenGlobalISelV1 STATIC DISABLE_LLVM_LINK_LLVM_DYLIB
  CodeExpander.cpp
  GIMatchDag.cpp
  GIMatchDagEdge.cpp
  GIMatchDagInstr.cpp
  GIMatchDagOperands.cpp
  GIMatchDagPredicate.cpp
  GIMatchDagPredicateDependencyEdge.cpp
  GIMatchTree.cpp

  DEPENDS
  vt_gen
  )

# Users may include its headers as "GlobalISel/*.h"
target_include_directories(LLVMTableGenGlobalISelV1
  INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
  )
