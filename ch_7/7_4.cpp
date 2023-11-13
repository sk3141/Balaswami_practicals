#include <iostream>
using namespace std;

class String
{
    public:
    char* str;
    int size;

    String()
    {
        size = 1;
        str = new char[size];
        str[0] = '\0';
    }
    
    String operator = (const char* s)
    {
        int length = 0;
        for (int i = 0; s[i] != '\0'; i++)
        {
            length++;
        }
        size = length + 1;
        this->str = new char[size];
        for (int i = 0; s[i] != '\0'; i++)
        {
            this->str[i] = s[i];
        }
        return *this;
    }

    bool operator == (const String& s)
    {
        for (int i = 0; this->str[i] != '\0' || s.str[i] != '\0'; i++)
        {
            if (this->str[i] != s.str[i])
            {
            return false;
            }
        }
        return true;
    }

};

int main()
{
    String s, s1;
    s = "Hello";
    s1 = "Hello world";
    cout << s.str << endl << s1.str << endl;
    int res = s == s1;
    cout << res;
    return 0;
}