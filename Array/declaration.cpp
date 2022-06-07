// Note: In int a[3]={[0…1]=3}; this kind of declaration has been obsolete since GCC 2.5

// Array declaration by specifying size
// int arr1[10];

// With recent C/C++ versions, we can also
// declare an array of user specified size
// int n = 10;
// int arr2[n];

#include <iostream>
using namespace std;
int main()
{
    // Array declaration by specifying size and initializing
    // elements
    int arr[6] = {10, 20, 30, 40};

    // Compiler creates an array of size 6, initializes first
    // 4 elements as specified by user and rest two elements as
    // 0. above is same as "int arr[] = {10, 20, 30, 40, 0, 0}"

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << "  ";
    }
}

