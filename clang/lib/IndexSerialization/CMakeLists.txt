set(LLVM_LINK_COMPONENTS
  SupportV1
  )

add_clang_library(clangIndexSerialization
  SerializablePathCollection.cpp

  LINK_LIBS
  clangBasic
  )
