#include <iostream>
#include <stdexcept>

int divide(int numerator, int denominator)
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
        int numerator, denominator;
        std::cout << "Enter a numerator :- ";
        std::cin >> numerator;
        std::cout << "Enter a denominator :- ";
        std::cin >> denominator;
        std::cout << "Result = " << divide(numerator, denominator);
    }
    catch(std::exception &e)
    {
        std::cerr << "Error Occured in main():" << e.what() << std::endl;
    }
    return 0;
}