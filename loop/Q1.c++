// 1) Write a Program to Calculate Sum of first N Natural Numbers (here value of N is Entered by user)
#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    cin>>n;
    for (int i = 0; i <= n; i++)
    {
        sum=sum+i;  //sum+=i; both r same
    }
    cout<<sum;
    return 0;
}