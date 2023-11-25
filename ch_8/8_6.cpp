#include <iostream>
#include <string>

class Staff
{
    public:
    int EmployeeCode;
    std::string name;

    void setData(int code, std::string name)
    {
        this->name = name;
        this->EmployeeCode = code;
    }

    void display()
    {
        std::cout << "Employee Code :- " << EmployeeCode;
        std::cout << std::endl;
    }
};

class Officer
{
    public:
    Staff S;
    std::string grade;
    void setGrade(std::string grade)
    {   
        this->grade = grade;
    }
    void displayGrade()
    {
        std::cout << "Officer Grade :- " << grade;
        std::cout << std::endl;
    }
};

class Teacher
{
    public:
    Staff S;
    std::string publication;
    std::string subject;

    void setSubject(std::string subject, std::string publication)
    {
        this->subject = subject;
        this->publication = publication;
    }

    void displayTeacher()
    {
        std::cout << "teacher subject :- " << subject << std::endl;
        std::cout << "Teacher punlication :- " << publication;
        std::cout << std::endl;
    }
};

class Typist
{
    public:
    Staff S;
    int wordsPerMinute;
};

class Regular
{
    public:
    Staff S;
    float monthlyWage;
    void setMonthlyWage(float amount)
    {
        monthlyWage = amount;
    }
    void display()
    {
        std::cout << "Monthly wage of regular typist = " << monthlyWage;
        std::cout << std::endl;
    }
};


class Casual
{
    public:
    Staff S;
    float dailyWages;
    void setDailyWage(float amount)
    {
        dailyWages = amount;
    }
    void display()
    {
        std::cout << "Daily wage of casual typist = " << dailyWages;
        std::cout << std::endl;
    }
};

