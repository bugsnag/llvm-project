add_lldb_executable(lit-cpuid
  lit-cpuid.cpp

  LINK_COMPONENTS
    SupportV1
    TargetParserV1
  )

set_target_properties(lit-cpuid PROPERTIES FOLDER "lldb utils")
