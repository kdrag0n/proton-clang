# This file allows users to call find_package(LLD) and pick up our targets.


# Compute the installation prefix from this LLVMConfig.cmake file location.
get_filename_component(LLD_INSTALL_PREFIX "${CMAKE_CURRENT_LIST_FILE}" PATH)
get_filename_component(LLD_INSTALL_PREFIX "${LLD_INSTALL_PREFIX}" PATH)
get_filename_component(LLD_INSTALL_PREFIX "${LLD_INSTALL_PREFIX}" PATH)
get_filename_component(LLD_INSTALL_PREFIX "${LLD_INSTALL_PREFIX}" PATH)

find_package(LLVM REQUIRED CONFIG
             HINTS "${LLD_INSTALL_PREFIX}/lib/cmake/llvm")

set(LLD_EXPORTED_TARGETS "lldCommon;lldCore;lldDriver;lldMachO;lldYAML;lldReaderWriter;lld;lldCOFF;lldELF;lldMachO2;lldMinGW;lldWasm")
set(LLD_CMAKE_DIR "${LLD_INSTALL_PREFIX}/lib/cmake/lld")
set(LLD_INCLUDE_DIRS "${LLD_INSTALL_PREFIX}/include")

# Provide all our library targets to users.
include("${LLD_CMAKE_DIR}/LLDTargets.cmake")
