#include <iostream>
#define C 3.14
using namespace std;

class Shape
{
    public:
    float x, y;
    void init()
    {
        cout << "Enter parameter 1 :- ";
        cin >> x;
        cout << "Enter parameter 2 :- ";
        cin >> y;
    }

    virtual void displayArea()
    {
        cout << "Area of Shape = ";
        cout << C * x * y; 
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

int main()
{
    Triangle t;
    Rectangle r;
    t.init();
    r.init();
    t.displayArea();
    r.displayArea();

    return 0;
}