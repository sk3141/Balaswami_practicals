#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
    private:
    string depositorName;
    float accBalance;
    string accType;
    long int accNumber;

    public:
    void deposit(float amount)
    {
        accBalance += amount;
    }
    void withdraw(float amount)
    {
        if (accBalance >= amount)
            accBalance -= amount;
        else
            cout << "Insufficient Balance" << endl;
    }
    void displayInfo()
    {
        cout << "Depositor Name :- " << depositorName << endl;
        cout << "Account Balance :- " << accBalance << endl;
    }
};