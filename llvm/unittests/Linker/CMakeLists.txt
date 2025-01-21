set(LLVM_LINK_COMPONENTS
  AsmParserV1
  coreV1
  linker
  )

add_llvm_unittest(LinkerTests
  LinkModulesTest.cpp
  )
