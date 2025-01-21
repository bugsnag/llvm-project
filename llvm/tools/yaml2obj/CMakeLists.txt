set(LLVM_LINK_COMPONENTS
  ObjectYAML
  SupportV1
  )

add_llvm_utility(yaml2obj
  yaml2obj.cpp
  )
