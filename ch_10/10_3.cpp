#include <iostream>
#include <iomanip>
#define MAX_SIZE 1000
using namespace std;

int numberOfWords(char str[])
{
    int i = 0;
    int count = 1;
    while (str[i] != '\0')
    {
        if ((int)str[i] == 32)
        {
            count++;
        }
        i++;
    }
    return count;
}

int numberOfLines(char str[])
{
    int i = 0;
    int count = 1;
    while (str[i] != '\0')
    {
        if(str[i] == '\n')
        {
            count++;
        }
        i++;
    }
    return count;
}

int numberOfCharacter(char str[])
{
    int i = 0;
    int count = 0;
    while (str[i] != '\0')
    {
        if (str[i] != ' ' && str[i] != '\n')
        {
            count++;
        }
        i++;
    }
    return count;
}
int main()
{
    char string[MAX_SIZE];
    cout << "Enter a string :- ";
    cin.get(string, MAX_SIZE);

    cout << "Number Of Lines" << setw(15) << right << numberOfLines(string) << endl;
    cout << "Number Of Characters" << setw(15) << right << numberOfCharacter(string) << endl;
    cout << "Number Of Words" << setw(15) << right << numberOfWords(string) << endl;
    return 0;
}