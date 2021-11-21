#include <iostream>
#include "CfoCustomerBudgetHandler.hpp"
#include "CustomerBudget.hpp"

void CfoCustomerBudgetHandler::handle(CustomerBudget customerBudget) {
    if (customerBudget.getAmount() < 5000) {
        std::cout << "The CFO has handled the customer budget" << std::endl;
    }
    return AbstractHandler::handle(customerBudget);
}