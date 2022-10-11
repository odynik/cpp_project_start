cmake_minimum_required(VERSION 3.10)
 
project(cpp_example VERSION 0.1)

# cpp application versioning
configure_file(app_config.h.in app_config.h)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(lib)
add_subdirectory(app)


# option(ENABLE_TESTS "Use testing suite" ON)
# if(ENABLE_TESTS)
#   add_subdirectory(tests)
#   list(APPEND EXTRA_LIBS tests)
#   list(APPEND EXTRA_INCLUDES "${PROJECT_SOURCE_DIR}/tests")
# endif()

# # add the executable
# add_executable(Tutorial tutorial.cxx)

# target_link_libraries(Tutorial PUBLIC ${EXTRA_LIBS})

# # add the binary tree to the search path for include files
# # so that we will find TutorialConfig.h
# target_include_directories(Tutorial PUBLIC
#                            "${PROJECT_BINARY_DIR}"
#                            ${EXTRA_INCLUDES}
#                            )