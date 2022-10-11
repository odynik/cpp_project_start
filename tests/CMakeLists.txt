cmake_minimum_required(VERSION 3.10)
 
project(cpp_example_tests)
 
# specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

option(ENABLE_GTEST "Use Google Test Framework libary" ON)
if(ENABLE_GTEST)
    enable_testing()
    add_subdirectory(src)
    add_subdirectory(lib/googletest-release-1.12.1)
    set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
endif()