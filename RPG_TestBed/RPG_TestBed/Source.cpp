// CPP program to illustrate
// parameterized constructors
#include <iostream>
using namespace std;

class BaseStats
{
private:
    int Dex, Str;

public:
    // Parameterized Constructor
    BaseStats(int x1, int y1)
    {
        Dex = x1;
        Str = y1;
    }

    int getDEX()
    {
        return Dex;
    }
    int getSTR()
    {
        return Str;
    }
};

class Player : BaseStats {

};
int main()
{
    // Constructor called
    Player p1.BaseStats(10, 15);

    // Access values assigned by constructor
    cout << "p1.x = " << p1.getDex() << ", p1.y = " << p1.getY();

    return 0;
}