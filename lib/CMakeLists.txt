add_library(lib src/calc.cpp)
 
message("lib current source dir = ${CMAKE_CURRENT_SOURCE_DIR}")
 
target_include_directories(lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)