set(LLVM_LINK_COMPONENTS SupportV1)
list(REMOVE_ITEM LLVM_COMMON_DEPENDS clang-tablegen-targets)

add_clang_executable(clang-pseudo-gen
  Main.cpp
  )

target_link_libraries(clang-pseudo-gen
  PRIVATE
  clangPseudoGrammar
  )
