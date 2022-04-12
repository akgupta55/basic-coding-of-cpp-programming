// 4) Inverted Half pyramid
// * * * * * *
// * * * * *
// * * * *
// * * *
// * *
// *

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter num ::--- " << endl;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        for (int j = num; j <= 1; --j)
        {
            cout<<"* ";
        }

        cout<<endl;
    }

    return 0;
}