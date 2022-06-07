// Traversal in an array C++
// Traversal in an array C++ 

// Given an integer array of size N, the task is to traverse and print the elements in the array.

// Example :--

// Input: arr[] = {2, -1, 5, 6, 0, -3} 
// Output: 2 -1 5 6 0 -3

// Input: arr[] = {4, 0, -2, -9, -7, 1} 
// Output: 4 0 -2 -9 -7 1 

// Approach:--

// 1. Start a loop from 0 to N-1, where N is the size of array.

// for(i = 0; i < N; i++)


// 2. Access every element of array with help of

// arr[index]


// 3. Print the elements.

// cout<< arr[i]<<endl;

// Below is the implementation of the above approach :--

// C++ program to traverse the array

#include <bits/stdc++.h>
using namespace std;

// Function to traverse and print the array
void printArray(int* arr, int n)
{
    int i;

    cout << "Array: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << "  ";
    }
}

// Driver program
int main()
{
    int arr[] = { 2, -1, 5, 6, 0, -3 };
    int n = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, n);

    return 0;
}

// Output
// Array: 2  -1  5  6  0  -3  
// Time Complexity: O(n)

// Auxiliary Space: O(1)

