#include <iostream>
#include "SellerBudgetHandler.hpp"
#include "ClientBudget.hpp"

void SellerBudgetHandler::handle(ClientBudget clientBudget) {
    if (clientBudget.getAmount() < 1000) {
        std::cout << "Seller has handled the customer budget" << std::endl;
    }
    return AbstractHandler::handle(clientBudget);
}