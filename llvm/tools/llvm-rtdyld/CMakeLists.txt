set(LLVM_LINK_COMPONENTS
  AllTargetsDisassemblers
  AllTargetsDescs
  AllTargetsInfos
  DebugInfoDWARFV1
  ExecutionEngine
  MCV1
  ObjectV1
  RuntimeDyld
  SupportV1
  TargetParserV1
  )

add_llvm_tool(llvm-rtdyld
  llvm-rtdyld.cpp
  )
