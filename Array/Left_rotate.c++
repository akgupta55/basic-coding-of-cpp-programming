#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    int temp = arr[1];
    int i = 0;
    int j = 1;

    while (i < n)
    {
        arr[i] = arr[i + 1];
        i++;
    }
    arr[n - 1] = temp;
    cout << endl;
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}