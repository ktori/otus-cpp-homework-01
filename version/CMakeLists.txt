add_library(version)

target_sources(version PRIVATE src/version.cpp PUBLIC include/version.h)
target_include_directories(version PRIVATE ${CMAKE_CURRENT_BINARY_DIR}/src)
target_include_directories(version PUBLIC include)

add_executable(version_test test/version_test.cpp)
target_link_libraries(version_test PRIVATE gtest gtest_main version)
add_test(version_test version_test)

configure_file(src/config.h.in src/config.h)