#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

int main()
{
    std::ifstream inputFile("contacts.txt");
    if (!inputFile.is_open())
    {
        std::cerr << "Cannot open file" << std::endl;
        return 1;
    }

    std::string name, number;
    while (inputFile >> name >> number)
    {
        std::cout << std::left << std::setw(20) << name
            <<  std::right << std::setw(15) << number << std::endl;
    }
    inputFile.close();
    return 0;
}