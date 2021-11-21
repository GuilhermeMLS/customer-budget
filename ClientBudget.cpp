#include "ClientBudget.hpp"

ClientBudget::ClientBudget(float amount): amount{amount} {}

void ClientBudget::approve() {
    this->approved = true;
}

float ClientBudget::getAmount() const {
    return this->amount;
}

void ClientBudget::setAmount(float value) {
    this->amount = value;
}

bool ClientBudget::isApproved() const {
    return this->approved;
}