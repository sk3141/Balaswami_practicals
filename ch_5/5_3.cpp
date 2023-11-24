#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
using namespace std;

class BankAccount {
private:
    string depositorName;
    float accBalance;
    long int accNumber;

public:
    BankAccount(string depositor) : depositorName(depositor), accBalance(0.00), accNumber(rand()) {}

    void deposit(float amount) {
        accBalance += amount;
    }

    void withdraw(float amount) {
        if (accBalance >= amount)
            accBalance -= amount;
        else
            cout << "Insufficient Balance" << endl;
    }

    void displayInfo() {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Account Balance: " << accBalance << endl;
        cout << "Account Number: " << accNumber << endl;
        cout << "-----------------------" << endl;
    }
};

int main() {
    const int numberOfCustomers = 10;
    vector<BankAccount> customers;

    // Create 10 BankAccount objects for different customers
    for (int i = 1; i <= numberOfCustomers; ++i) {
        string depositorName = "Customer" + to_string(i);
        BankAccount customer(depositorName);
        customers.push_back(customer);
    }

    // Perform transactions for each customer
    for (int i = 0; i < numberOfCustomers; ++i) {
        customers[i].deposit(1000.00);   // Deposit $1000.00
        customers[i].withdraw(500.00);   // Withdraw $500.00
    }

    // Display information for each customer
    for (int i = 0; i < numberOfCustomers; ++i) {
        cout << "Customer " << i + 1 << " Information:" << endl;
        customers[i].displayInfo();
    }

    return 0;
}
  