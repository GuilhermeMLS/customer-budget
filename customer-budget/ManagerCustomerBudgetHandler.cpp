#include <iostream>
#include "ManagerCustomerBudgetHandler.hpp"
#include "CustomerBudget.hpp"

void ManagerCustomerBudgetHandler::handle(CustomerBudget customerBudget) {
    if (customerBudget.getAmount() < 5000) {
        std::cout << "Manager has handled the customerBudget budget" << std::endl;
    }
    return AbstractHandler::handle(customerBudget);
}