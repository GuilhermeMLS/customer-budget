#include <iostream>
#include "CfoCustomerBudgetHandler.hpp"
#include "CustomerBudget.hpp"

void CfoCustomerBudgetHandler::handle(CustomerBudget customerBudget) {
    customerBudget.approve();
    std::cout << "CFO has handled the customer budget" << std::endl;
}