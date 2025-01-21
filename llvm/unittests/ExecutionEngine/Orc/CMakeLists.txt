
set(LLVM_LINK_COMPONENTS
  CoreV1
  ExecutionEngine
  IRReaderV1
  JITLink
  ObjectV1
  OrcJIT
  OrcShared
  OrcTargetProcess
  Passes
  RuntimeDyld
  SupportV1
  TargetParserV1
  native
  )

add_llvm_unittest(OrcJITTests
  CoreAPIsTest.cpp
  ExecutorAddressTest.cpp
  ExecutionSessionWrapperFunctionCallsTest.cpp
  EPCGenericJITLinkMemoryManagerTest.cpp
  EPCGenericMemoryAccessTest.cpp
  IndirectionUtilsTest.cpp
  JITTargetMachineBuilderTest.cpp
  LazyCallThroughAndReexportsTest.cpp
  LookupAndRecordAddrsTest.cpp
  MapperJITLinkMemoryManagerTest.cpp
  MemoryMapperTest.cpp
  ObjectFormatsTest.cpp
  ObjectLinkingLayerTest.cpp
  OrcCAPITest.cpp
  OrcTestCommon.cpp
  ResourceTrackerTest.cpp
  RTDyldObjectLinkingLayerTest.cpp
  SharedMemoryMapperTest.cpp
  SimpleExecutorMemoryManagerTest.cpp
  SimplePackedSerializationTest.cpp
  SymbolStringPoolTest.cpp
  TaskDispatchTest.cpp
  ThreadSafeModuleTest.cpp
  WrapperFunctionUtilsTest.cpp
  )

target_link_libraries(OrcJITTests PRIVATE
                        LLVMTestingSupport
                        ${ORC_JIT_TEST_LIBS})

set_property(TARGET OrcJITTests PROPERTY FOLDER "Tests/UnitTests/ExecutionTests")

export_executable_symbols(OrcJITTests)
