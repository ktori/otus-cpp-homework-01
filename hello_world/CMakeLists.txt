add_executable(hello-world)

target_sources(hello-world PRIVATE ${CMAKE_CURRENT_LIST_DIR}/src/hello_world.cpp)
target_link_libraries(hello-world PRIVATE version)

install(TARGETS hello-world RUNTIME DESTINATION bin)