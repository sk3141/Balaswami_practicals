#include <iostream>
#include <stdexcept>
#include <stdlib.h>

long long int factorial(long long int n)
{
    try
    {
        if (n < 0)
        {
            throw std::runtime_error("Number cannot be negative");
        }
        if (n > 20)
        {
            throw n;
        }

        if (n == 0 || n == 1)
        {
            return 1; 
        }
        return n * factorial(n - 1);
    }
    catch(const std::exception& e)
    {
        std::cerr <<"Error : " << e.what() << '\n';
    }
    catch(long long int x)
    {
        std::cerr << "\n Error : Number too large\n";
        exit(1);
    }
    
}
int main()
{
    int n;
    std::cout << "Enter a number :- ";
    std::cin >> n;

    std::cout << "Factorial of number" << factorial(n); 
    return 0;
}