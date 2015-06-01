FILE(REMOVE_RECURSE
  "CMakeFiles/libhsail-includes"
  "generated/HSAILBrigInstUtils_gen.hpp"
  "generated/HSAILBrigPropsName_gen.hpp"
  "generated/HSAILBrigValidation_gen.hpp"
  "generated/HSAILItems_gen.hpp"
  "generated/HSAILBrigPropsAcc_gen.hpp"
  "generated/HSAILBrigPropsVisitor_gen.hpp"
  "generated/HSAILInitBrig_gen.hpp"
  "generated/HSAILItemUtils_gen.hpp"
  "generated/HSAILScannerRules_gen_re2c.hpp"
  "generated/HSAILBrigPropsFastAcc_gen.hpp"
  "generated/HSAILBrigStaticChecks_gen.hpp"
  "generated/HSAILInstValidation_gen.hpp"
  "generated/HSAILParserUtilities_gen.hpp"
  "generated/HSAILTemplateUtilities_gen.hpp"
  "generated/HSAILBrigProps_gen.hpp"
  "generated/HSAILBrigUtilities_gen.hpp"
  "generated/HSAILItemImpls_gen.hpp"
  "generated/HSAILPropAccessors_gen.hpp"
  "generated/HSAILVisitItems_gen.hpp"
  "generated/HSAILScannerRules_gen.re2c"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/libhsail-includes.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
