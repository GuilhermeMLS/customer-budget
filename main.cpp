#include <iostream>
#include "customer-budget/CustomerBudget.hpp"
#include "customer-budget/SellerCustomerBudgetHandler.hpp"
#include "customer-budget/ManagerCustomerBudgetHandler.hpp"
#include "customer-budget/DirectorCustomerBudgetHandler.hpp"
#include "customer-budget/CfoCustomerBudgetHandler.hpp"

int main() {

    auto *seller = new SellerCustomerBudgetHandler;
    auto *manager = new ManagerCustomerBudgetHandler;
    auto *director = new DirectorCustomerBudgetHandler;
    auto *cfo = new CfoCustomerBudgetHandler;

    seller->setNext(manager)->setNext(director)->setNext(cfo);

    CustomerBudget customerBudget { 10001 };

    seller->handle(&customerBudget);

    customerBudget.print();

    return 0;
}
