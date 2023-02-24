// A Simple Method to count squares between a and b
#include <bits/stdc++.h>
using namespace std;

int countSquares(int a, int b)
{
    int cnt = 0; // Initialize result

    // Traverse through all numbers
    for (int i = a; i <= b; i++)

        // Check if current number 'i' is perfect
        // square
        for (int j = 1; j * j <= i; j++)
            if (j * j == i)
                cout << i << " ";

    return cnt;
}

// Driver code
int main()
{
    int a = 9, b = 25;
    cout << "Count of squares is "
         << countSquares(a, b);
    return 0;
}
