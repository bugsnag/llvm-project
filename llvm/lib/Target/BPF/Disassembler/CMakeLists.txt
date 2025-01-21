add_llvm_component_library(LLVMBPFDisassembler
  BPFDisassembler.cpp

  LINK_COMPONENTS
  MCDisassembler
  MCV1
  BPFInfo
  SupportV1

  ADD_TO_COMPONENT
  BPF
)

