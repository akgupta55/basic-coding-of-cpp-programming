#include <iostream>
using namespace std;

void reversString(string &str, int i, int j)
{
    // cout << endl;

    cout << "call " << str << endl;

    // cout << endl;

    // base case
    if (i > j)
        return;

    swap(str[i], str[j]);
    i++;
    j--;

    // recursive call
    return reversString(str, i, j);
}

int main()
{

    string name = "yogendra";

    reversString(name, 0, name.length() - 1);

    cout << endl;
    cout << "   " << name << endl;
    cout << endl;

    return 0;
}