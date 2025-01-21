add_llvm_utility(KillTheDoctor
  KillTheDoctor.cpp
  )

target_link_libraries(KillTheDoctor
  PRIVATE
  LLVMSupportV1
  psapi
  )
