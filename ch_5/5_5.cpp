#include <iostream>
using namespace std;
class DM
{
    public:
    float meter;
    float centimeter;

    DB Convert(DM& temp)
    {
        DB res;
        res.feet = temp.meter / 0.3 + temp.centimeter / 30;
        res.inches = (temp.centimeter % 30) / 2.54;
        return res;
    }
};
class DB
{
    public:
    float feet;
    float inches;

    DM Convert(const DB& temp)
    {
        DM res
    }
};

int main()
{
    return 0;
}