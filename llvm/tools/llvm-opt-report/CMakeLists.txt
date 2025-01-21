set(LLVM_LINK_COMPONENTS
  DemangleV1
  RemarksV1
  SupportV1
  )

add_llvm_tool(llvm-opt-report
  OptReport.cpp
  )

