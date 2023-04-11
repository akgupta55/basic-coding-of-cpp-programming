// Sum of all divisors from 1 to n

#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

void method1(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }
    }
    cout << "Sum = " << sum;
}

// easy solution  method 2 TC---- O(N) and SC---O(1)

// let suppose number = 4

// try to dry run then you will find that 1 comes 4 times 2 comes 4/2 times 3 comes 4/3 times and 4 comes 4/4 times

// then simple logic is

// (n/i)*i;

long long sumOfDivisors(int N)
{
    long long sum = 0;
    for (int i = 1; i <= N; i++)
    {
        sum += (N / i) * i;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    // method1(n);
    cout << sumOfDivisors(n);
    return 0;
}