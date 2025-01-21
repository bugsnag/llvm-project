set(LLVM_LINK_COMPONENTS
  ObjectV1
  ObjCopy
  ObjectYAML
  )

add_llvm_unittest(ObjCopyTests
  ObjCopyTest.cpp
  )

target_link_libraries(ObjCopyTests PRIVATE LLVMTestingSupport)
