add_executable(sample_exec main.cpp)

add_library(sample_lib sample.cpp include/sample.h)

target_link_libraries(sample_exec sample_lib)
target_link_libraries(sample_exec cxxopts)

target_include_directories(sample_lib PUBLIC include)