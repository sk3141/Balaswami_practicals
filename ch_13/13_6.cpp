
#include <iostream>
#include <stdexcept>
#include <cctype>

void getInput(double &a, double &b)
{
    std::cout << "Enter number 1 :- ";
    std::cin >> a;
    if (std::cin.fail())
    {
        throw std::runtime_error("Character entered");
    }
    
    std::cout << "Enter number 2 :- ";
    std::cin >> b;
    if (std::cin.fail())
    {
        throw std::runtime_error("Character entered");
    }
}

double divide(double numerator, double denominator)
{
    try
    {
        if (denominator == 0)
        {
            throw std::runtime_error("Division By 0 not allowed");
        }
        return numerator / denominator;
    }
    catch(std::exception &e)
    {
        std::cerr << "Error Occured in divide() :" << e.what() << std::endl;
        throw;
    }
}
int main()
{
    try
    {
        double num1, num2, result;
        getInput(num1, num2);
        result = divide(num1, num2);
        std::cout << "Result = " << result << std::endl;    
    }
    catch(std::exception &e)
    {
        std::cerr << "Error Occured in main() :" << e.what() << std::endl;
    }
    return 0;
}