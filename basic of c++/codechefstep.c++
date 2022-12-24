// input

// 3
// 10 10 10
// 23 3 12
// 1000 1000 1000

// output

// 400
// 624
// 4000000

// #include <iostream>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int l, b, x;
//         cin >> l >> b >> x;
//         int peri = 0, cost = 0;
//         peri = 2 * (l + b);
//         cost = peri * x;
//         cout << cost;
//     }
//     return 0;
// }

// input

// 3
// 100 11 1 10
// 999 25 36 9
// 2500 100 125 101

// output

// 200
// 900
// -25

// #include <iostream>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int l, b, x, z;
//         cin >> l >> b >> x >> z;
//         int rem = b - x;
//         int total = l + rem * z;
//         cout << total << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    int t;
    int n;
    cin >> t;
    while (t--)
    {
        int count = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 1; j < n; j++)
            {
                int gres = gcd(a[i], a[j]);
                int lres = gres * a[i] * a[j];
                if (gres == lres)
                {
                    {
                        count++;
                    }
                }
            }
        }
        cout << count << endl;
        return 0;
    }
}
//     4
// 12 12 18 18