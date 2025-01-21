add_flang_library(FIRCodeGen
  BoxedProcedure.cpp
  CGOps.cpp
  CodeGen.cpp
  PreCGRewrite.cpp
  TBAABuilder.cpp
  Target.cpp
  TargetRewrite.cpp
  TypeConverter.cpp

  DEPENDS
  FIRDialect
  FIROptCodeGenPassIncGen
  CGOpsIncGen

  LINK_LIBS
  FIRBuilder
  FIRDialect
  FIRDialectSupport
  FIRSupport
  MLIRComplexToLLVM
  MLIRComplexToStandard
  MLIRMathToFuncs
  MLIRMathToLLVM
  MLIRMathToLibm
  MLIROpenMPToLLVM
  MLIRBuiltinToLLVMIRTranslation
  MLIRLLVMToLLVMIRTranslation
  MLIRTargetLLVMIRExport

  LINK_COMPONENTS
  AsmParserV1
  AsmPrinter
  RemarksV1
  TargetParserV1
)
