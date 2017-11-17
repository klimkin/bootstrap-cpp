cmake_minimum_required(VERSION 3.5)
project(bootstrap_cpp)

enable_testing()
set(CMAKE_CXX_STANDARD 14)
add_compile_options(-Wall)

add_subdirectory(external/googletest)

set(SOURCE_FILES main.cpp)
add_executable(hello ${SOURCE_FILES})

add_executable(example_test example_test.cpp)
add_test(example_test example_test)
target_link_libraries(example_test gtest gmock gmock_main)
