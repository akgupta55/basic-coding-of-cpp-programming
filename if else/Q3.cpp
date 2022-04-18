// 3) Write a Program to Find Largest Number Among Three Numbers entered by users
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if (a<b)
    {
        if (c<b)
        {
            cout<<b<<" largest";
        }    
        else
            cout<<c<<" largest";
    }
    else
        cout<<a<<" largest";
    return 0;
}