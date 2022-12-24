#include <iostream>
using namespace std;

void print(int *arr, int s, int e)
{
    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << endl;
}

bool binarySearch(int *arr, int s, int e, int k)
{
    print(arr, s, e);

    if (s > e)
        return false;

    int mid = s + (e - s) / 2;

    if (arr[mid] == k)
        return true;

    if (arr[mid] < k)
    {
        return binarySearch(arr, mid + 1, e, k);
    }
    else
    {
        return binarySearch(arr, s, mid - 1, k);
    }
}

int main()
{
    int arr[5] = {2, 3, 4, 5, 7};
    int size = 5;
    int k = 1;

    bool ans = binarySearch(arr, 0, 4, k);

    if (ans)
    {
        cout << k << " is Present" << endl;
    }
    else
        cout << k << " is Absent" << endl;

    return 0;
}