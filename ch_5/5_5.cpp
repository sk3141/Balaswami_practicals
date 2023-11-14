#include <iostream>
//#include <cmath>
using namespace std;
class DM
{
    public:
    int meter;
    int centimeter;

    DB Convert(DM& temp)
    {
        DB res;
        int t = 0;
        t = temp.meter * 100 + temp.centimeter;
        res.feet = t / 30;
        res.inches = (t % 30) / 2.54;
        return res;
    }
};
class DB
{
    public:
    int feet;
    int inches;

    DM Convert(const DB& temp)
    {
        DM res;
        int t = 0;
        t = temp.feet * 12 + temp.inches;
        res.meter = t / 39.3;
        res.centimeter = t * 2.54;
        return res;
    }
};

int main()
{
    return 0;
}