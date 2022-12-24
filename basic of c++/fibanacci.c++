// #include <iostream>
// // 0 0 1 2 3
// using namespace std;

// int fib(int n)
// {
//     if (n <= 1)
//     {
//         return n;
//     }
//     return (fib(n - 1) + fib(n - 2));
// }

// int main()
// {
//     int n;
//     cout << "Enter a number :-- " << endl;
//     cin >> n;
//     cout << "fibanacci of n is " << fib(n) << endl;
// }

// C++ program for Fibonacci Series
// using Dynamic Programming
#include <stdio.h>

// int fib(int n)
// {

//     // Declare an array to store
//     // Fibonacci numbers.
//     // 1 extra to handle
//     // case, n = 0
//     int f[n + 2];
//     int i;

//     // 0th and 1st number of the
//     // series are 0 and 1
//     f[0] = 0;
//     f[1] = 1;

//     for (i = 2; i <= n; i++)
//     {

//         // Add the previous 2 numbers
//         //  in the series and store it
//         f[i] = f[i - 1] + f[i - 2];
//     }
//     return f[n];
// }

// int main()
// {
//     int n;
//     printf("Enter a number :--");
//     scanf("%d", &n);

//     printf("%d", fib(n));
//     return 0;
// }

int fib(int n)
{
    int a = 0, b = 1, c, i;
    if (n == 0)
        return a;
    for (i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main()
{
    int n = 6;

    printf("%d", fib(n));
    return 0;
}