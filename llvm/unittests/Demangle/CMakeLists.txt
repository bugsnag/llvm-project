set(LLVM_LINK_COMPONENTS
  DemangleV1
  SupportV1
)

add_llvm_unittest(DemangleTests
  DemangleTest.cpp
  DLangDemangleTest.cpp
  ItaniumDemangleTest.cpp
  OutputBufferTest.cpp
  PartialDemangleTest.cpp
  RustDemangleTest.cpp
  StringViewTest.cpp
)
