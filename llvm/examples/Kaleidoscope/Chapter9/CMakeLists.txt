set(LLVM_LINK_COMPONENTS
  CoreV1
  ExecutionEngine
  ObjectV1
  OrcJIT
  SupportV1
  TargetParserV1
  native
  )

add_kaleidoscope_chapter(Kaleidoscope-Ch9
  toy.cpp
  )

export_executable_symbols(Kaleidoscope-Ch9)
