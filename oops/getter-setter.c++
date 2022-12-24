#include <iostream>
using namespace std;
class Hero
{
    // properties
private:
    int health;

public:
    char level;

    void print()
    {
        cout << level << endl;
    }

    int getHealth()
    {
        return health;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char ch)
    {
        level = ch;
    }
};
int main()
{
    // creation of Object
    Hero ajay;
    // gethealth(70);
    // cout << "Ajay health is " << ajay.getHealth() << endl;
    ajay.setHealth(70);
    ajay.level = 'A';

    cout << "health is: " << ajay.getHealth() << endl;
    cout << "level is: " << ajay.level << endl;
    return 0;
}