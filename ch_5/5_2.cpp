#include <iostream>
using namespace std;

class Vector
{
    public:
    int x, y, z;
    Vector(int x = 0, int y = 0, int z = 0)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    friend ostream& operator << (const ostream&, const Vector&);
    friend Vector operator * (int, const Vector&);
    friend Vector operator * (const Vector&, int);
};

ostream& operator << (ostream& os, const Vector& v)
{
    os << "(" << v.x << "," << v.y << "," << v.z << ")";
    os << endl;
    return os;
}

Vector operator * (int scalar, const Vector& v)
{
    Vector res;
    res.x = v.x * scalar;
    res.y = v.y * scalar;
    res.z = v.z * scalar;
    return res;
}


Vector operator * (const Vector& v, int scalar)
{
    Vector res;
    res.x = v.x * scalar;
    res.y = v.y * scalar;
    res.z = v.z * scalar;
    return res;
}

int main()
{
    Vector v1(2,3,4);
    Vector v2(5,5,7);

    cout << v1;
    cout << v2;
    cout << "v1 X 2 = " << v1 * 2;
    cout << "v2 X 3 = " << v2 * 3;
    return 0;
}