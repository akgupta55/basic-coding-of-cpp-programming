#include <iostream>
using namespace std;
int sumOfElement(int *arr, int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return arr[0];
    }
    // 1 + 2 + 3
    return arr[0] + sumOfElement(arr + 1, n - 1);
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    cout << "Sum of element in an array is " << sumOfElement(arr, size) << endl;
    return 0;
}