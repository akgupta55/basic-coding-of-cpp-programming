// 2) Hollow Rectangular star
// * * * * *
// *       *
// * * * * *

#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cout<<"Enter row and col ::--- "<<endl;
    cin>>row>>col;
    for (int i = 1; i <=row; i++)
    {
        for (int j = 1; j <=col; j++)
        {
            if (i==1||i==row||j==1||j==col+1)
            {
                cout<<"* ";
            }
            else
            cout<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}