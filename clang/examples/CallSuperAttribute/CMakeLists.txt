add_llvm_library(CallSuperAttr MODULE CallSuperAttrInfo.cpp PLUGIN_TOOL clang)

if(WIN32 OR CYGWIN)
  set(LLVM_LINK_COMPONENTS
    SupportV1
  )
  clang_target_link_libraries(CallSuperAttr PRIVATE
    clangAST
    clangBasic
    clangFrontend
    clangLex
    )
endif()
