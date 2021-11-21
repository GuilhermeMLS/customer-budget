#ifndef SELLER_CUSTOMER_BUDGET_HANDLER
#define SELLER_CUSTOMER_BUDGET_HANDLER

#include "CustomerBudget.hpp"
#include "../chain-of-responsibility/AbstractHandler.hpp"

class SellerCustomerBudgetHandler : public AbstractHandler<CustomerBudget> {
public:
    void handle(CustomerBudget* customerBudget) override;
};

#endif