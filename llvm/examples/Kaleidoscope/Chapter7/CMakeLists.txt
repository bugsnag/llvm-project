set(LLVM_LINK_COMPONENTS
  Analysis
  CoreV1
  ExecutionEngine
  InstCombine
  ObjectV1
  OrcJIT
  RuntimeDyld
  ScalarOpts
  SupportV1
  TransformUtils
  native
  )

add_kaleidoscope_chapter(Kaleidoscope-Ch7
  toy.cpp
  )

export_executable_symbols(Kaleidoscope-Ch7)
