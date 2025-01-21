set(LLVM_LINK_COMPONENTS
  LineEditor
  SupportV1
  )

add_llvm_unittest(LineEditorTests
  LineEditor.cpp
  )
