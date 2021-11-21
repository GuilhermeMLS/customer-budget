#include <iostream>
#include "DirectorCustomerBudgetHandler.hpp"
#include "CustomerBudget.hpp"

void DirectorCustomerBudgetHandler::handle(CustomerBudget customerBudget) {
    if (customerBudget.getAmount() < 10000) {
        customerBudget.approve();
        std::cout << "Director has handled the customer budget" << std::endl;
        return;
    }
    return AbstractHandler::handle(customerBudget);
}