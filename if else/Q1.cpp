// 1) Write a Program to Check Whether Number is Even or Odd
#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    // if (a%2==0)
    // {
    //   cout<<"Even"<<endl;   
    // }
    // else
    // cout<<"Odd"<<endl;
    (a % 2 == 0) ? cout << a << " is even." : cout << a << " is odd.";
    return 0;
}