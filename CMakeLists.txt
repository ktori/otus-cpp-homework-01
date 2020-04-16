cmake_minimum_required(VERSION 3.3)

project(hello-world VERSION 0.1.0)
set (CMAKE_CXX_STANDARD 17)

add_subdirectory(googletest)
enable_testing()

add_subdirectory(hello_world)
add_subdirectory(version)

set(CPACK_GENERATOR DEB)

set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")

set(CPACK_PACKAGE_CONTACT tori@ktori.me)

include(CPack)
