#ifndef CUSTOMER_BUDGET
#define CUSTOMER_BUDGET

class CustomerBudget {
private:
    bool approved{};
    float amount;
public:
    explicit CustomerBudget(float amount);
    float getAmount() const;
    void setAmount(float value);
    bool isApproved() const;
    void approve();
    void print() const;
};

#endif