#ifndef CLIENT_BUDGET
#define CLIENT_BUDGET

class ClientBudget {
private:
    bool approved{};
    float amount;
public:
    explicit ClientBudget(float amount);
    float getAmount() const;
    void setAmount(float value);
    bool isApproved() const;
    void approve();
};

#endif