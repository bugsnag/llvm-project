set(LLVM_LINK_COMPONENTS
  SupportV1
  SymbolizeV1
  )

add_llvm_tool(sanstats
  sanstats.cpp

  DEPENDS
  intrinsics_gen
  )
