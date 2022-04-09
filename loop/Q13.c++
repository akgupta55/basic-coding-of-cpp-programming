// 13) Write a Program to Check Whether a Number is Prime or Not
#include<iostream>
using namespace std;
int main()
{
    int n,m=0,flag=0;
    cout<<"Enter no.::--"<<endl;
    cin>>n;
    m=n/2;
    for (int i = 2; i <=m; i++)
    {
        if (n%i==0)
        {
            cout<<"Not a Prime."<<endl;
            flag=1;
            break;
        }
        
    }
    if(flag==0)
    {
        cout<<"It is Prime number."<<endl;
    }
    return 0;
}