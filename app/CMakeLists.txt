add_executable(app main.cpp)
 
target_link_libraries(app lib)
target_include_directories(app PUBLIC "${PROJECT_BINARY_DIR}") 