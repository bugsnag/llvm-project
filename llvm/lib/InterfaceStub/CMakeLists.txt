add_llvm_component_library(LLVMInterfaceStub
  ELFObjHandler.cpp
  IFSHandler.cpp
  IFSStub.cpp

  LINK_COMPONENTS
  BinaryFormatV1
  MCV1
  ObjectV1
  SupportV1
  TargetParserV1
)
