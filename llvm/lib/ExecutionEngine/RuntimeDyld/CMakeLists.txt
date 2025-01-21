add_llvm_component_library(LLVMRuntimeDyld
  JITSymbol.cpp
  RTDyldMemoryManager.cpp
  RuntimeDyld.cpp
  RuntimeDyldChecker.cpp
  RuntimeDyldCOFF.cpp
  RuntimeDyldELF.cpp
  RuntimeDyldMachO.cpp
  Targets/RuntimeDyldELFMips.cpp

  DEPENDS
  intrinsics_gen


  LINK_COMPONENTS
  CoreV1
  MCV1
  ObjectV1
  SupportV1
  TargetParserV1
  )
