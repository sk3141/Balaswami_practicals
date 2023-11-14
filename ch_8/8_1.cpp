#include <iostream>
#include <string>
using namespace std;

class Account
{
    protected:
    int accNumber;
    float accBalance;
    string depositorName;

    public:
    Account(string dName)
    {
        depositorName = dName;
    }
    float getBalance()
    {
        return accBalance;
    }
    void deposit(float amount)
    {
        accBalance += amount;
    }
    void withdraw(float amount)
    {
        accBalance -= amount;
    }
};

class SavingAccount : public Account
{
    public:
    SavingAccount(string dName) : Account(dName)
    {
        depositorName = dName;
    }
    void addInterest(float rate)
    {
        accBalance += (accBalance * rate) / 100;
    }
};

class CurrentAccount : public Account
{

};

int main()
{
    return 0;
}