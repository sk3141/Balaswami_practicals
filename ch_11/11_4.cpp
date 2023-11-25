#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <map>

std::map<std::string, std::string> createMap(std::ifstream& ifs)
{
    std::map<std::string, std::string> directory;
    std::string name, number;
    while (ifs >> name >> number)
    {
        directory.insert({name, number});
    }
    return directory;
}

void pushChanges(std::ofstream& ofs, std::map<std::string, std::string>& record)
{
    for (auto itr = record.begin(); itr != record.end(); itr++)
    {
        ofs.setf(std::ios::left, std::ios::adjustfield);
        ofs.width(20);
        ofs << itr->first;
        ofs.setf(std::ios::right, std::ios::adjustfield);
        ofs.width(15);
        ofs << itr->second << '\n';
    }
}
int main()
{
    int choice;
    std::map<std::string, std::string> phoneDirectory;
    std::ifstream inputFile("contacts.txt");
    if (!inputFile.is_open())
    {
        std::cerr << "Cannot Open File" << std::endl;
        return 1;
    }

    phoneDirectory = createMap(inputFile);
    std::cout << "(1 for searching number)'\n";
    std::cout << "(2 for searching name)'\n";
    std::cout << "(3 for updating telephone number)'\n";
    std::cout << "Enter command :- ";
    std::cin >> choice;

    if (choice == 1)
    {
        std::string name;
        std::cout << "Enter name :- ";
        std::cin >> name;

        std::cout << "Phone number of " << name << ":- " << phoneDirectory[name];
        std::cout << std::endl;
    }

    else if (choice == 2)
    {
        std::string number;
        std::cout << "Enter phone number :- ";
        std::cin >> number;

        auto itr = phoneDirectory.begin();
        for (phoneDirectory.begin(); itr->second != number; itr++);

        std::cout << "Name :- " << itr->first;
        std::cout << std::endl;
    }

    else if (choice == 3)
    {
        std::ofstream outputFile("contacts.txt");
        if (!outputFile.is_open())
        {
            std::cerr << "Cannot open file" << std::endl;
            return 1;
        }

        std::string name;
        std::string number;
        std::cout << "Enter name :- ";
        std::cin >> name;

        std::cout << "Enter updated phone number :- ";
        std::cin >> number;

        phoneDirectory[name] = number; 
        pushChanges(outputFile, phoneDirectory);
        outputFile.close();
    }
    else
    {
        std::cerr << "Invalid Input " << std::endl;
        return 1;
    }
    return 0;
}