// 8) Half pyramid using numbers
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

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
        for (int j = 0; j <= i; j++)
        {
            cout << x << " ";
            x++;
        }

        cout << endl;
    }

    return 0;
}