#include <iostream>
#include "SellerCustomerBudgetHandler.hpp"
#include "CustomerBudget.hpp"

void SellerCustomerBudgetHandler::handle(CustomerBudget customerBudget) {
    if (customerBudget.getAmount() < 1000) {
        std::cout << "Seller has handled the customer budget" << std::endl;
    }
    return AbstractHandler::handle(customerBudget);
}