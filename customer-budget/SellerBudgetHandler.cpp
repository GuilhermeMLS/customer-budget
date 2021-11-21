#include <iostream>
#include "SellerBudgetHandler.hpp"
#include "CustomerBudget.hpp"

void SellerBudgetHandler::handle(CustomerBudget clientBudget) {
    if (clientBudget.getAmount() < 1000) {
        std::cout << "Seller has handled the customer budget" << std::endl;
    }
    return AbstractHandler::handle(clientBudget);
}