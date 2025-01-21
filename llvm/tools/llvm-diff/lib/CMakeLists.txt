set(LLVM_LINK_COMPONENTS
    CoreV1
    SupportV1
    )

add_llvm_library(LLVMDiff
  STATIC
  DiffConsumer.cpp
  DiffConsumer.h
  DifferenceEngine.cpp
  DifferenceEngine.h
  DiffLog.cpp
  DiffLog.h
  )
