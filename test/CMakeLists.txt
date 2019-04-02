add_executable(tests unit.cpp sample_test.cpp)

target_link_libraries(tests Catch2::Catch2)
target_link_libraries(tests sample_lib)