add_llvm_component_library(LLVMBPFInfo
  BPFTargetInfo.cpp

  LINK_COMPONENTS
  MCV1
  SupportV1

  ADD_TO_COMPONENT
  BPF
  )
