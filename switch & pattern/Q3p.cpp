// 3) Half Pyramid Star Pattern 
// *
// * *
// * * *
// * * * *
// * * * * *

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter num ::--- "<<endl;
    cin>>num;
    for (int i = 1; i <=num; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<"* ";
        }
        
        cout<<endl;
    }
    
    return 0;
}