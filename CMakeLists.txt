cmake_minimum_required(VERSION 3.3)
cmake_policy(SET CMP0076 NEW)

project(hello-world VERSION 0.0.1)

add_subdirectory(googletest)
enable_testing()

add_subdirectory(hello_world)
add_subdirectory(version)

install(TARGETS hello-world RUNTIME DESTINATION bin)

set(CPACK_GENERATOR DEB)

set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")

set(CPACK_PACKAGE_CONTACT tori@ktori.me)

include(CPack)
