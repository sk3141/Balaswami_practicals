#include <iostream>
using namespace std;

class Float
{
    public:
    float value;
    Float(float v = 0.00)
    {
        value = v;
    }

    Float operator + (const Float& f)
    {
        Float res;
        res.value = value + f.value;
        return res;
    }
    Float operator - (const Float& f)
    {
        Float res;
        res.value = value - f.value;
        return res;
    }
    Float operator * (const Float& f)
    {
        Float res;
        res.value = value * f.value;
        return res;
    }
    Float operator / (const Float& f)
    {
        Float res;
        res.value = value / f.value;
        return res;
    }
};

int main()
{
    Float f1(3.25), f2(3.2);
    cout << "f1 + f2 = " << (f1 + f2).value << endl;
    cout << "f1 - f2 = " << (f1 - f2).value << endl;
    cout << "f1 * f2 = " << (f1 * f2).value << endl;
    cout << "f1 / f2 = " << (f1 / f2).value << endl;
    return 0;
}