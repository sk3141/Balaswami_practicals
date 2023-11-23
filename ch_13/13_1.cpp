#include <iostream>
#include <stdexcept>

int main()
{
    try
    {
        int numerator, denominator, result;
        std::cout << "Enter a numerator :- ";
        std::cin >> numerator;
        std::cout << "Enter a denominator :- ";
        std::cin >> denominator;

        if (denominator == 0)
        {
            throw std::runtime_error("Division By 0 not allowed");
        }

        result = numerator / denominator;
        std::cout << "result = " << result;
    }

    catch(std::exception &e)
    {
        std::cerr << "Error Occured :" << e.what() << std::endl;
    }
    return 0;
}