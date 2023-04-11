// 14)
// E     =>  0
// DE    =>  1
// CDE   =>  2
// BCDE  =>  3
// ABCDE =>  4

#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    char ch = 'E';
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'E' - i; ch <= 'E'; ch++)
        {
            cout << ch;
        }

        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    print(n);
}