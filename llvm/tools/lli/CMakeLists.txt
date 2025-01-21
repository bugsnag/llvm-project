if ( LLVM_INCLUDE_UTILS )
  add_subdirectory(ChildTarget)
endif()

set(LLVM_LINK_COMPONENTS
  CodeGen
  CoreV1
  ExecutionEngine
  IRReaderV1
  Interpreter
  JITLink
  MCV1
  MCJIT
  ObjectV1
  OrcShared
  OrcJIT
  OrcTargetProcess
  Passes
  RuntimeDyld
  SelectionDAG
  SupportV1
  TargetV1
  TargetParserV1
  TransformUtils
  native
  )

if( LLVM_USE_OPROFILE )
  set(LLVM_LINK_COMPONENTS
    ${LLVM_LINK_COMPONENTS}
    OProfileJIT
    )
endif( LLVM_USE_OPROFILE )

if( LLVM_USE_INTEL_JITEVENTS )
  set(LLVM_LINK_COMPONENTS
    ${LLVM_LINK_COMPONENTS}
    DebugInfoDWARFV1
    IntelJITEvents
    ObjectV1
    )
endif( LLVM_USE_INTEL_JITEVENTS )

if( LLVM_USE_PERF )
  set(LLVM_LINK_COMPONENTS
    ${LLVM_LINK_COMPONENTS}
    DebugInfoDWARFV1
    PerfJITEvents
    ObjectV1
    )
endif( LLVM_USE_PERF )

add_llvm_tool(lli
  lli.cpp
  ExecutionUtils.cpp

  DEPENDS
  intrinsics_gen
  )

export_executable_symbols(lli)
