#include <iostream>
using namespace std;

void swapAlternet(int a[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(a[i], a[i + 1]);
        }
    }
}

int main()
{
    int arrodd[5] = {1, 3, 5, 7, 11};
    int arreven[6] = {2, 4, 6, 8, 10, 12};

    int n = 6;
    cout << "Before swaping array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arreven[i] << endl;
    }
    cout << "After swaping array" << endl;
    swapAlternet(arreven, n);
    for (int i = 0; i < n; i++)
    {
        cout << arreven[i] << endl;
    }
    return 0;
}