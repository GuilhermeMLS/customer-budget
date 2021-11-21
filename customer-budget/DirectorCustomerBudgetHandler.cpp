#include <iostream>
#include "DirectorCustomerBudgetHandler.hpp"
#include "CustomerBudget.hpp"

void DirectorCustomerBudgetHandler::handle(CustomerBudget customerBudget) {
    if (customerBudget.getAmount() < 5000) {
        std::cout << "Director has handled the customer budget" << std::endl;
    }
    return AbstractHandler::handle(customerBudget);
}