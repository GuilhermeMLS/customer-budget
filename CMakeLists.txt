cmake_minimum_required(VERSION 3.19)
project(order)

set(CMAKE_CXX_STANDARD 14)

add_executable(
    customer-budget
    main.cpp
        chain-of-responsibility/Handler.hpp
        chain-of-responsibility/AbstractHandler.hpp
        customer-budget/CustomerBudget.cpp
        customer-budget/CustomerBudget.hpp
        customer-budget/SellerBudgetHandler.cpp
        customer-budget/SellerBudgetHandler.hpp
)