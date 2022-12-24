#include <iostream>
using namespace std;

int partition(int *arr, int s, int e)
{
    int pivot = arr[s];
    int cnt = 0;
}
void quickSort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
        return;

    // partition karenge
    int p = partition(arr, s, e);

    // left part sort karo
    quickSort(arr, s, p - 1);

    // right part sort karo
    quickSort(arr, p + 1, e);
}

int main()
{
    int arr[12] = {10, 1, 2, 9, 17, 18, 21, 3, 1, 2, 10, 9};
    int n = 12;
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}