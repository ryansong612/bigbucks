cmake_minimum_required(VERSION 3.10)
project(OrderTests)

# Set C++ standard
set(CMAKE_CXX_STANDARD 20)

# Add Google Test
add_subdirectory(third_party/googletest)
include_directories(third_party/googletest/include)

# Add your source files
add_executable(OrderTests order_test.cpp order.cpp)

# Link Google Test libraries
target_link_libraries(OrderTests gtest gtest_main pthread)
