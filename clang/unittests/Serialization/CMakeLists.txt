set(LLVM_LINK_COMPONENTS
  BitReaderV1
  BitstreamReaderV1
  SupportV1
  )

add_clang_unittest(SerializationTests
  InMemoryModuleCacheTest.cpp
  ModuleCacheTest.cpp
  SourceLocationEncodingTest.cpp
  )

clang_target_link_libraries(SerializationTests
  PRIVATE
  clangAST
  clangBasic
  clangFrontend
  clangLex
  clangSema
  clangSerialization
  )
