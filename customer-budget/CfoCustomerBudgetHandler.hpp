#ifndef CFO_CUSTOMER_BUDGET_HANDLER
#define CFO_CUSTOMER_BUDGET_HANDLER

#include "CustomerBudget.hpp"
#include "../chain-of-responsibility/AbstractHandler.hpp"

class CfoCustomerBudgetHandler : public AbstractHandler<CustomerBudget> {
public:
    void handle(CustomerBudget* customerBudget) override;
};

#endif