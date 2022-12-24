#include <iostream>
using namespace std;

void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << endl;
}

bool isSorted(int *arr, int n)
{
    print(arr, n);

    if (n == 0 || n == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
        return isSorted(arr + 1, n - 1);
}
bool linearSearch(int *arr, int n, int k)
{
    print(arr, n);

    if (n == 0)
    {
        return false;
    }

    if (arr[0] == k)
    {
        return true;
    }
    else
    {
        return linearSearch(arr + 1, n - 1, k);
    }
}
int main()
{
    int arr[5] = {2, 3, 1, 6, 7};
    int size = 5;
    int k = 8;
    // bool ans = isSorted(arr, size);
    bool ans = linearSearch(arr, size, k);
    if (ans)
    {
        // cout << "Element is sorted" << endl;
        cout << "Element " << k << " is present" << endl;
    }
    else
        // cout << "Not sorted" << endl;
        cout << k << " is Not present" << endl;
    return 0;
}