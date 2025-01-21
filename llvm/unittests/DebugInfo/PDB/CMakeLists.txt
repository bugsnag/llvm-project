set(LLVM_LINK_COMPONENTS
  DebugInfoCodeViewV1
  DebugInfoMSFV1
  DebugInfoPDBV1
  )

add_llvm_unittest_with_input_files(DebugInfoPDBTests
  HashTableTest.cpp
  NativeSessionTest.cpp
  NativeSymbolReuseTest.cpp
  StringTableBuilderTest.cpp
  PDBApiTest.cpp
  )

target_link_libraries(DebugInfoPDBTests PRIVATE LLVMTestingSupport)

set_property(TARGET DebugInfoPDBTests PROPERTY FOLDER "Tests/UnitTests/DebugInfoTests")
