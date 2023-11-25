#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

class PhoneRecord
{
    private:
    std::string name;
    std::string number;

    public:
    PhoneRecord(std::string name, std::string number)
    {
        this->name = name;
        this->number = number;
    }
    friend std::ofstream& operator << (std::ofstream&, const PhoneRecord*);
};

std::ofstream& operator << (std::ofstream& ofs, const PhoneRecord *record)
{
    ofs.setf(std::ios::left, std::ios::adjustfield);
    ofs.width(20);
    ofs << record->name;
    ofs.setf(std::ios::right, std::ios::adjustfield);
    ofs.width(15);
    ofs << record->number << '\n';
}

int main()
{
    std::ofstream outputFile("contacts.txt");
    if (!outputFile.is_open())
    {
        std::cerr << "Cannot open file" << std::endl;
        return 1;
    }

    int numberOfRecords;
    std::string name, number;
    std::cout << "Enter number of records to be stored :- ";
    std::cin >> numberOfRecords;

    for (int i = 0; i < numberOfRecords; i++)
    {
        std::cout << "Enter Name :- ";
        std::cin >> name;
        std::cout << "Enter number :- ";
        std::cin >> number;

        PhoneRecord *temp = new PhoneRecord(name, number);
        outputFile << temp;
        delete temp;
    }
    return 0;
}