set(LLVM_LINK_COMPONENTS
  CoreV1
  ExecutionEngineV1
  MCV1
  MCJIT
  RuntimeDyld
  SupportV1
  TargetV1
  nativecodegen
  )

# Enable EH and RTTI for this demo
if(NOT LLVM_ENABLE_EH)
  message(FATAL_ERROR "ExceptionDemo must require EH.")
endif()

add_llvm_example(ExceptionDemo
  ExceptionDemo.cpp
  )

export_executable_symbols(ExceptionDemo)
