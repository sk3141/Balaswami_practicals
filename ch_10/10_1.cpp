#include <iostream>
#include <iomanip>  
void printSeparatorLine(int width) {
    for (int i = 0; i < width; ++i) {
        std::cout << "-";
    }
    std::cout << std::endl;
}
int main() {
    // Table headers
    std::cout << std::setw(15) << std::left << "Name";
    std::cout << std::setw(10) << std::left << "Code";
    std::cout << std::setw(10) << std::left << "Cost" << std::endl;

    printSeparatorLine(30);
    // Table data
    std::cout << std::setw(15) << std::left << "Turbo C++";
    std::cout << std::setw(10) << std::left << 1000;
    std::cout << std::setw(10) << std::left << 300.25 << std::endl;

    std::cout << std::setw(15) << std::left << "DEV C++";
    std::cout << std::setw(10) << std::left << 500;
    std::cout << std::setw(10) << std::left << 5000.00 << std::endl;

    std::cout << std::setw(15) << std::left << "MSVC";
    std::cout << std::setw(10) << std::left << 1001;
    std::cout << std::setw(10) << std::left << 10.00 << std::endl;

    return 0;
}