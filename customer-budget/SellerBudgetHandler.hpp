#ifndef SELLER_BUDGET_HANDLER
#define SELLER_BUDGET_HANDLER

#include "CustomerBudget.hpp"
#include "../chain-of-responsibility/AbstractHandler.hpp"

class SellerBudgetHandler : public AbstractHandler<CustomerBudget> {
public:
    void handle(CustomerBudget clientBudget) override;
};

#endif