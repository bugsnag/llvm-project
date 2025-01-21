# This tool is excluded from the CMake build if Intel JIT events are disabled.

link_directories( ${LLVM_INTEL_JITEVENTS_LIBDIR} )
include_directories( ${LLVM_INTEL_JITEVENTS_INCDIR} )

set(LLVM_LINK_COMPONENTS
  asmparserV1
  bitreaderV1
  DebugInfoDWARFV1
  inteljitevents
  interpreter
  irreaderV1
  mcjit
  nativecodegen
  objectV1
  selectiondag
  SupportV1
  TargetParserV1
  ExecutionEngine
  RuntimeDyld
  CoreV1
  )

add_llvm_tool(llvm-jitlistener
  llvm-jitlistener.cpp
  )
