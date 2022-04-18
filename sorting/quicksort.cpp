#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[s];

    int cnt = 0;
    for (int i = s+1; i <=e; i++)
    {
        if (arr[i] <= pivot)
        {
            cnt++;
        }
    }

    // placement of pivot element at position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    // left and right sorting
    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quicksort(int arr[], int s, int e)
{

    // base case
    if (s >= e)
    {
        return;
    }

    // partition recusive
    int p = partition(arr, s, e);

    // for left part sorting
    quicksort(arr, s, p - 1);

    // for right part sorting
    quicksort(arr, p + 1, e);
}

int main()
{
    int arr[5] = {2, 4, 1, 5, 3};
    int n=5;

    quicksort(arr, 0, n - 1);
    cout<<"sorted array..";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}