// #include <iostream>
// using namespace std;
// void f(int n)
// {
//     if (n == 0)
//         return;

//     f(n - 1);
//     cout << n << endl;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     f(n);
// }

// method 2 ----recursion

// #include <iostream>
// #include <string>
// using namespace std;

// void f(int i, int n)
// {
//     if (i > n)
//     {
//         return;
//     }

//     cout << i << endl;
//     f(i + 1, n);
// }

// int main()
// {

//     int n;
//     cin >> n;
//     f(1, n);
// }

// method 3 --backtracking

#include <iostream>
#include <string>
using namespace std;

void f(int i, int n)
{
    if (i < 1)
    {
        return;
    }

    f(i - 1, n);
    cout << i << endl;
}

int main()
{

    int n;
    cin >> n;
    f(n, n);
}