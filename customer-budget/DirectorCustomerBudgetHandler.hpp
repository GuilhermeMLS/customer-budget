#ifndef DIRECTOR_CUSTOMER_BUDGET_HANDLER
#define DIRECTOR_CUSTOMER_BUDGET_HANDLER

#include "CustomerBudget.hpp"
#include "../chain-of-responsibility/AbstractHandler.hpp"

class DirectorCustomerBudgetHandler : public AbstractHandler<CustomerBudget> {
public:
    void handle(CustomerBudget customerBudget) override;
};

#endif