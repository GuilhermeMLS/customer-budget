#include "CustomerBudget.hpp"

CustomerBudget::CustomerBudget(float amount): amount{amount} {}

void CustomerBudget::approve() {
    this->approved = true;
}

float CustomerBudget::getAmount() const {
    return this->amount;
}

void CustomerBudget::setAmount(float value) {
    this->amount = value;
}

bool CustomerBudget::isApproved() const {
    return this->approved;
}