add_lldb_library(lldbPluginObjectFileBreakpad PLUGIN
  BreakpadRecords.cpp
  ObjectFileBreakpad.cpp

  LINK_LIBS
    lldbCore
    lldbHost
    lldbSymbol
    lldbUtility
  LINK_COMPONENTS
    SupportV1
    TargetParserV1
  )
