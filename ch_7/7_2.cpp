#include <iostream>
#include <cmath>
using namespace std;

class Polar
{
    public:
    double radius;
    double angle;

    Polar(double r = 0.00, double a = 0.00)
    {
        radius = r;
        angle = a;
    }

    Polar operator + (const Polar& p)
    {
        Polar res;
        int x1, x2;
        int y1, y2;

        x1 = radius * cos(angle);
        y1 = radius * sin(angle);

        x2 = p.radius * cos(p.angle);
        y2 = p.radius * sin(p.angle);

        int x = x1 + x2;
        int y = y1 + y2;

        res.radius = sqrt(x*x + y*y);
        res.angle = atan2(y, x);

        return res;
    }
};  

int main()
{
    Polar p1(2,3), p2(4,3);
    Polar p3 = p1 + p2;
    cout << "p1 + p2 = " << p3.radius << "(cos(" << p3.angle << ")sin(" << p3.angle << ")" << endl;
    return 0;
}