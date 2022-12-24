#include <iostream>
using namespace std;
// using itreative mathod

int binarySearch(int arr[], int key, int n)
{
    int start = 0;
    int end = n - 1;

    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        // right wala part
        if (key > arr[mid])
        {
            start = mid + 1;
        } // left wala part
        else
        {
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }

    return -1;
}

int main()
{
    int arr[6] = {1, 4, 22, 27, 34, 56};
    int key;
    cin >> key;
    cout << "Element " << key << " present at index " << binarySearch(arr, key, 6) << endl;
    ;
    return 0;
}