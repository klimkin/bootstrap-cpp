cmake_minimum_required(VERSION 3.6)
project(bootstrap_cpp)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(external/googletest)

set(SOURCE_FILES main.cpp)
add_executable(bootstrap_cpp ${SOURCE_FILES})

add_test(example_test example_test.cpp)
add_executable(example_test example_test.cpp)
target_link_libraries(example_test gtest gmock gmock_main)