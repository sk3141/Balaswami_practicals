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

    Rectangle convertRectangle(Polar& p)
    {
        Rectangle r;
        r.x_coordinate = p.radius * cos(p.angle);
        r.y_coordinate = p.radius * sin(p.angle);
        return r;
    }
};  

class Rectangle
{
    public:
    int x_coordinate;
    int y_coordinate;

    Rectangle(int x = 0, int y = 0)
    {
        x_coordinate = x;
        y_coordinate = y;
    }

    Polar convertPolar(Rectangle& r)
    {
        Polar p;
        p.radius = sqrt(r.x_coordinate * r.x_coordinate + r.y_coordinate * r.y_coordinate);
        p.angle = atan2(r.y_coordinate, r.x_coordinate);
        return p;
    }
};

