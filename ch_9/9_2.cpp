#include <iostream>
#define PI 3.14
using namespace std;

class Shape
{
    public:
    float x, y;
    virtual void init()
    {
        cout << "Enter parameter 1 :- ";
        cin >> x;
        cout << "Enter parameter 2 :- ";
        cin >> y;
    }

    virtual void displayArea()
    {
        cout << "Area of Shape = ";
        cout << PI * x * y; 
    }
};

class Triangle : public Shape
{
    public:
    void displayArea()
    {
        cout << "Area of triangle = " << 0.5 * x * y;
        cout << endl;
    }
};

class Rectangle : public Shape
{
    public:
    void displayArea()
    {
        cout << "Area of Rectangle = " << x * y;
        cout << endl;
    }
};

class Circle : public Shape
{
    public:
    void init()
    {
        cout << "Enter Radius of The Circle :- ";
        cin >> x;
    }

    void displayArea()
    {
        cout << "Area of circle is :- " << PI * x * x << "sq. units";
    }
};

int main()
{
    Circle c;
    c.init();
    c.displayArea();

    return 0;
}