#include <iostream>
#include "ManagerCustomerBudgetHandler.hpp"
#include "CustomerBudget.hpp"

void ManagerCustomerBudgetHandler::handle(CustomerBudget* customerBudget) {
    if (customerBudget->getAmount() < 5000) {
        customerBudget->approve();
        std::cout << "Manager has handled the customer budget" << std::endl;
        return;
    }
    return AbstractHandler::handle(customerBudget);
}