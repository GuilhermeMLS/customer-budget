cmake_minimum_required(VERSION 3.19)
project(order)

set(CMAKE_CXX_STANDARD 14)

add_executable(customer-budget main.cpp Handler.hpp AbstractHandler.cpp ClientBudget.cpp ClientBudget.hpp)