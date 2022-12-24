#include <iostream>
#include <string>
using namespace std;

void f(int i, int n)
{
    if (i > n)
    {
        return;
    }

    f(i + 1, n);
    cout << "Ajay" << endl;
}

int main()
{

    int n;
    cin >> n;
    f(1, n);
}