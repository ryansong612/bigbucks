cmake_minimum_required(VERSION 3.26)
project(bigbucks)

set(CMAKE_CXX_STANDARD 20)

add_executable(bigbucks src/main.cpp
        src/order.cpp
        src/order.h
        test/order/order_test.cpp
        test/order/order_test.h)
