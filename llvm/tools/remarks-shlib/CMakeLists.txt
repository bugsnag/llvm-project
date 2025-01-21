# Building shared libraries requires PIC objects.
if(LLVM_ENABLE_PIC)

  set(LLVM_LINK_COMPONENTS
    RemarksV1
    )

  set(SOURCES
    libremarks.cpp
    )

  if (NOT (BUILD_SHARED_LIBS OR LLVM_LINK_LLVM_DYLIB))
    set(LLVM_EXPORTED_SYMBOL_FILE ${CMAKE_CURRENT_SOURCE_DIR}/Remarks.exports)
  endif()

  add_llvm_library(RemarksV1 SHARED INSTALL_WITH_TOOLCHAIN ${SOURCES})

  if (LLVM_INTEGRATED_CRT_ALLOC AND MSVC)
    # Make sure we search LLVMSupport first, before the CRT libs
    set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -INCLUDE:malloc")
  endif()
  
  install(FILES ${LLVM_MAIN_INCLUDE_DIR}/llvm-c/Remarks.h
    DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}/llvm-c"
    COMPONENT RemarksV1)

  if (APPLE)
    set(REMARKS_VERSION ${LLVM_VERSION_MAJOR})
    set_property(TARGET RemarksV1 APPEND_STRING PROPERTY
                 LINK_FLAGS
                 " -compatibility_version 1 -current_version ${REMARKS_VERSION}.${LLVM_VERSION_MINOR}.${LLVM_VERSION_PATCH}")
  endif()

endif()
