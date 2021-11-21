#ifndef SELLER_BUDGET_HANDLER
#define SELLER_BUDGET_HANDLER

#include "ClientBudget.hpp"
#include "AbstractHandler.hpp"

class SellerBudgetHandler : public AbstractHandler<ClientBudget> {
public:
    void handle(ClientBudget clientBudget) override;
};

#endif