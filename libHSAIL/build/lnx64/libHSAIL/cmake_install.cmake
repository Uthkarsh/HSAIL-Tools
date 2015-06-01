# Install script for directory: /home/uthkarsh/Downloads/HSAIL-Tools/libHSAIL/libHSAIL

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/usr/local")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/uthkarsh/Downloads/HSAIL-Tools/libHSAIL/build/lnx64/libHSAIL/libhsail.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libHSAIL" TYPE FILE FILES
    "/home/uthkarsh/Downloads/HSAIL-Tools/libHSAIL/libHSAIL/Brig.h"
    "/home/uthkarsh/Downloads/HSAIL-Tools/libHSAIL/libHSAIL/HSAILBrigContainer.h"
    "/home/uthkarsh/Downloads/HSAIL-Tools/libHSAIL/libHSAIL/HSAILBrigObjectFile.h"
    "/home/uthkarsh/Downloads/HSAIL-Tools/libHSAIL/libHSAIL/HSAILBrigantine.h"
    "/home/uthkarsh/Downloads/HSAIL-Tools/libHSAIL/libHSAIL/HSAILConvertors.h"
    "/home/uthkarsh/Downloads/HSAIL-Tools/libHSAIL/libHSAIL/HSAILDisassembler.h"
    "/home/uthkarsh/Downloads/HSAIL-Tools/libHSAIL/libHSAIL/HSAILDump.h"
    "/home/uthkarsh/Downloads/HSAIL-Tools/libHSAIL/libHSAIL/HSAILFloats.h"
    "/home/uthkarsh/Downloads/HSAIL-Tools/libHSAIL/libHSAIL/HSAILInstProps.h"
    "/home/uthkarsh/Downloads/HSAIL-Tools/libHSAIL/libHSAIL/HSAILItemBase.h"
    "/home/uthkarsh/Downloads/HSAIL-Tools/libHSAIL/libHSAIL/HSAILItems.h"
    "/home/uthkarsh/Downloads/HSAIL-Tools/libHSAIL/libHSAIL/HSAILParser.h"
    "/home/uthkarsh/Downloads/HSAIL-Tools/libHSAIL/libHSAIL/HSAILSRef.h"
    "/home/uthkarsh/Downloads/HSAIL-Tools/libHSAIL/libHSAIL/HSAILScanner.h"
    "/home/uthkarsh/Downloads/HSAIL-Tools/libHSAIL/libHSAIL/HSAILScope.h"
    "/home/uthkarsh/Downloads/HSAIL-Tools/libHSAIL/libHSAIL/HSAILTypeUtilities.h"
    "/home/uthkarsh/Downloads/HSAIL-Tools/libHSAIL/libHSAIL/HSAILUtilities.h"
    "/home/uthkarsh/Downloads/HSAIL-Tools/libHSAIL/libHSAIL/HSAILValidator.h"
    "/home/uthkarsh/Downloads/HSAIL-Tools/libHSAIL/libHSAIL/HSAILValidatorBase.h"
    "/home/uthkarsh/Downloads/HSAIL-Tools/libHSAIL/libHSAIL/HSAILb128_t.h"
    "/home/uthkarsh/Downloads/HSAIL-Tools/libHSAIL/libHSAIL/hsail_c.h"
    "/home/uthkarsh/Downloads/HSAIL-Tools/libHSAIL/libHSAIL/BrigDwarfGenerator.h"
    "/home/uthkarsh/Downloads/HSAIL-Tools/libHSAIL/libHSAIL/hsa_dwarf.h"
    "/home/uthkarsh/Downloads/HSAIL-Tools/libHSAIL/build/lnx64/libHSAIL/generated/HSAILBrigInstUtils_gen.hpp"
    "/home/uthkarsh/Downloads/HSAIL-Tools/libHSAIL/build/lnx64/libHSAIL/generated/HSAILBrigPropsName_gen.hpp"
    "/home/uthkarsh/Downloads/HSAIL-Tools/libHSAIL/build/lnx64/libHSAIL/generated/HSAILBrigValidation_gen.hpp"
    "/home/uthkarsh/Downloads/HSAIL-Tools/libHSAIL/build/lnx64/libHSAIL/generated/HSAILItems_gen.hpp"
    "/home/uthkarsh/Downloads/HSAIL-Tools/libHSAIL/build/lnx64/libHSAIL/generated/HSAILBrigPropsAcc_gen.hpp"
    "/home/uthkarsh/Downloads/HSAIL-Tools/libHSAIL/build/lnx64/libHSAIL/generated/HSAILBrigPropsVisitor_gen.hpp"
    "/home/uthkarsh/Downloads/HSAIL-Tools/libHSAIL/build/lnx64/libHSAIL/generated/HSAILInitBrig_gen.hpp"
    "/home/uthkarsh/Downloads/HSAIL-Tools/libHSAIL/build/lnx64/libHSAIL/generated/HSAILItemUtils_gen.hpp"
    "/home/uthkarsh/Downloads/HSAIL-Tools/libHSAIL/build/lnx64/libHSAIL/generated/HSAILScannerRules_gen_re2c.hpp"
    "/home/uthkarsh/Downloads/HSAIL-Tools/libHSAIL/build/lnx64/libHSAIL/generated/HSAILBrigPropsFastAcc_gen.hpp"
    "/home/uthkarsh/Downloads/HSAIL-Tools/libHSAIL/build/lnx64/libHSAIL/generated/HSAILBrigStaticChecks_gen.hpp"
    "/home/uthkarsh/Downloads/HSAIL-Tools/libHSAIL/build/lnx64/libHSAIL/generated/HSAILInstValidation_gen.hpp"
    "/home/uthkarsh/Downloads/HSAIL-Tools/libHSAIL/build/lnx64/libHSAIL/generated/HSAILParserUtilities_gen.hpp"
    "/home/uthkarsh/Downloads/HSAIL-Tools/libHSAIL/build/lnx64/libHSAIL/generated/HSAILTemplateUtilities_gen.hpp"
    "/home/uthkarsh/Downloads/HSAIL-Tools/libHSAIL/build/lnx64/libHSAIL/generated/HSAILBrigProps_gen.hpp"
    "/home/uthkarsh/Downloads/HSAIL-Tools/libHSAIL/build/lnx64/libHSAIL/generated/HSAILBrigUtilities_gen.hpp"
    "/home/uthkarsh/Downloads/HSAIL-Tools/libHSAIL/build/lnx64/libHSAIL/generated/HSAILItemImpls_gen.hpp"
    "/home/uthkarsh/Downloads/HSAIL-Tools/libHSAIL/build/lnx64/libHSAIL/generated/HSAILPropAccessors_gen.hpp"
    "/home/uthkarsh/Downloads/HSAIL-Tools/libHSAIL/build/lnx64/libHSAIL/generated/HSAILVisitItems_gen.hpp"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

