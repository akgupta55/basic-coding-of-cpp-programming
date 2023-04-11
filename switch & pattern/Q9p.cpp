// 9) Pascal Triangle

//     1
//    123
//   12345
//  1234567
// 123456789

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter row ::--- " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x = 1;
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << x;
            x++;
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        cout << endl;
    }

    return 0;
}