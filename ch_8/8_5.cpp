#include <iostream>
#include <string>

class Person
{
    public:
    std::string name;
    int code;
};

class Account : virtual public Person
{
    public:
    float pay;
};

class Admin : virtual public Person
{
    public:
    std::string experience;
};

class Master : public Admin, public Account
{
    public:
    void setDetails()
    {
        std::cout << "Enter Name :- ";
        std::cin >> name;

        std::cout << "Enter Code :- ";
        std::cin >> code;

        std::cout << "Enter Pay :- ";
        std::cin >> pay;

        std::cout << "Enter experience :- ";
        std::cin >> experience;
    }
};

int main()
{
    Master M;
    M.setDetails();
    return 0;
}