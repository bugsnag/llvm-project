set(LLVM_LINK_COMPONENTS
  BitWriter
  CoreV1
  SupportV1
  )

add_llvm_example(ModuleMaker
  ModuleMaker.cpp
  )
