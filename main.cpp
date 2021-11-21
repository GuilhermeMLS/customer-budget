#include <iostream>
#include "customer-budget/CustomerBudget.hpp"
#include "customer-budget/SellerCustomerBudgetHandler.hpp"
#include "customer-budget/ManagerCustomerBudgetHandler.hpp"
#include "customer-budget/DirectorCustomerBudgetHandler.hpp"
#include "customer-budget/CfoCustomerBudgetHandler.hpp"

int main(int argc, char *argv[]) {
    auto *seller = new SellerCustomerBudgetHandler;
    auto *manager = new ManagerCustomerBudgetHandler;
    auto *director = new DirectorCustomerBudgetHandler;
    auto *cfo = new CfoCustomerBudgetHandler;

    seller->setNext(manager)->setNext(director)->setNext(cfo);

    std::string input(argv[1]);
    float customerBudgetAmount = std::stof(input);

    CustomerBudget customerBudget { customerBudgetAmount };

    seller->handle(&customerBudget);

    customerBudget.print();

    return 0;
}
