include_directories(
  ${LLVM_MAIN_SRC_DIR}/lib/Target/DirectX
  ${LLVM_BINARY_DIR}/lib/Target/DirectX
  )

set(LLVM_LINK_COMPONENTS
  AsmParserV1
  CoreV1
  DirectXCodeGen
  DirectXPointerTypeAnalysis
  SupportV1
  )

add_llvm_target_unittest(DirectXTests
  CBufferDataLayoutTests.cpp
  PointerTypeAnalysisTests.cpp
  )
