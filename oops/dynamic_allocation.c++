#include <iostream>
using namespace std;
class Hero
{
private:
    int health;

public:
    char level;

    int getHealth()
    {
        return health;
    }
    void print()
    {
        cout << level << endl;
    }

    void setLevel(char ch)
    {
        level = ch;
    }
    void setHealth(int h)
    {
        health = h;
    }
};