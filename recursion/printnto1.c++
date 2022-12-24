// recursion ---- functional

// #include <iostream>
// using namespace std;
// void f(int n)
// {
//     if (n == 0)
//         return;
//     cout << n << endl;
//     f(n - 1);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     f(n);
// }

// method 2 ----recursion ----paramatic

// #include <iostream>
// #include <string>
// using namespace std;

// void f(int i, int n)
// {
//     if (i < 1)
//     {
//         return;
//     }

//     cout << i << endl;
//     f(i - 1, n);
// }

// int main()
// {

//     int n;
//     cin >> n;
//     f(n, n);
// }

// method 3 --backtracking

#include <iostream>
#include <string>
using namespace std;

void f(int i, int n)
{
    if (i == n)
    {
        return;
    }

    cout << n << endl;
    f(i, n - 1);
}

int main()
{

    int n;
    cin >> n;
    f(0, n);
}