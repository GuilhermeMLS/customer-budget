#ifndef MANAGER_CUSTOMER_BUDGET_HANDLER
#define MANAGER_CUSTOMER_BUDGET_HANDLER

#include "CustomerBudget.hpp"
#include "../chain-of-responsibility/AbstractHandler.hpp"

class ManagerCustomerBudgetHandler : public AbstractHandler<CustomerBudget> {
public:
    void handle(CustomerBudget customerBudget) override;
};

#endif