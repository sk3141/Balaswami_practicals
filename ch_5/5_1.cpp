#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class BankAccount
{
    private:
    string depositorName;
    float accBalance;
    string accType;
    long int accNumber;

    public:
    BankAccount(string depositor)
    {
        depositorName = depositor;
        accBalance = 0.00;
        accNumber = rand(); 
    }
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

int main()
{
    BankAccount d("Sahil");
    d.deposit(500.25);
    d.withdraw(250.00);
    d.displayInfo();
    return 0;
}