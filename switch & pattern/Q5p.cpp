// 5) Full Pyramid Star Pattern
//      *
//     * *
//    * * *
//   * * * *
//  * * * * *
// * * * * * *

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter row ::--- " << endl;
    cin >> n;
    // Write your code here.

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        cout << endl;
    }

    return 0;
}