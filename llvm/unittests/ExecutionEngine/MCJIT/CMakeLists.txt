set(LLVM_LINK_COMPONENTS
  Analysis
  CoreV1
  ExecutionEngine
  MCV1
  MCJIT
  Passes
  RuntimeDyld
  ScalarOpts
  SupportV1
  TargetV1
  TargetParserV1
  nativecodegen
  )

set(MCJITTestsSources
  MCJITTest.cpp
  MCJITCAPITest.cpp
  MCJITMemoryManagerTest.cpp
  MCJITMultipleModuleTest.cpp
  MCJITObjectCacheTest.cpp
  )

if(MSVC)
  list(APPEND MCJITTestsSources MCJITTests.def)
endif()

add_llvm_unittest(MCJITTests
  ${MCJITTestsSources}
  )

if(MINGW OR CYGWIN)
  set_property(TARGET MCJITTests PROPERTY LINK_FLAGS -Wl,--export-all-symbols)
endif()

set_property(TARGET MCJITTests PROPERTY FOLDER "Tests/UnitTests/ExecutionTests")
