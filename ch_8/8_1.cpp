#include <iostream>
#include <string>
#define RATE 0.15;
#define MINIMUM_BALANCE 500.00

class Account
{
    protected:
    std::string holderName;
    std::string AccountType;
    float balance;

    public:
    void setData()
    {
        std::cout << "Enter  Account Holder Name :- ";
        std::cin >> holderName;
        std::cout << "Enter Account Type :- ";
        std::cin >> AccountType;

        balance = 0.00;
    }
};

class CurrentAccount : public Account
{
    public:
    void withdraw(float amount)
    {
        balance -= amount;
        if (balance < MINIMUM_BALANCE)
        {
            std::cout << "Cannot withdraw funds. Must maintain minimum balance";
            std::cout << std::endl;
            balance += amount;
        }
    }

    void deposit(float amount)
    {
        balance += amount;
    }
    void displayBalance()
    {
        std::cout << "Current Balance = " << balance << std::endl;
    }
};

class SavingsAccount : public Account
{
    public:
    void deposit(float amount)
    {
        balance += amount;
    }
    void displayBalance()
    {
        std::cout << "Current Balance = " << balance << std::endl;
    }
    void withdraw(float amount)
    {
        balance -= amount;
    }

    void addIntererst()
    {
        float interest;
        interest = balance * RATE; // Interest for one year. Should only be added at end of year
        balance += interest;
    }
};

int main()
{
    SavingsAccount s;
    CurrentAccount c;
    s.setData();
    s.deposit(600.00);
    s.displayBalance();
    return 0;
}