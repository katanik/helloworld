cmake_minimum_required(VERSION 3.10)

project(hello CXX)

option(BUILD_TESTS "Build unittests" OFF)

include_directories(${PROJECT_SOURCE_DIR})
add_subdirectory(lib)

add_executable(helloworld main.cpp)
target_link_libraries(helloworld hello)

if(BUILD_TESTS)
    add_subdirectory(tests)
endif()
