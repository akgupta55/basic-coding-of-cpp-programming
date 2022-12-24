#include <iostream>
using namespace std;
class Hero
{
    // properties

public:
    int health;
    char level;
};
int main()
{
    // creation of object
    Hero ajay;

    // intializing value
    ajay.health = 70;
    ajay.level = 'A';

    // accesing properties/data member
    cout << "Healt is : " << ajay.health << endl;
    cout << "Level is : " << ajay.level << endl;

    return 0;
}