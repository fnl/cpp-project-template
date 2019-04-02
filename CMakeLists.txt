cmake_minimum_required(VERSION 3.12)

project(project_name LANGUAGES CXX VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 17)

set(CXXOPTS_HEADER ${CMAKE_CURRENT_LIST_DIR}/external/cxxopts/include/cxxopts.hpp)

add_subdirectory(external/Catch2)
add_subdirectory(external/cxxopts)
add_subdirectory(src)
add_subdirectory(test)