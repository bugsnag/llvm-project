set(LLVM_LINK_COMPONENTS
  CoreV1
  SupportV1
  Analysis
  IRReaderV1)

add_llvm_tool(llvm-sim
  llvm-sim.cpp
)
