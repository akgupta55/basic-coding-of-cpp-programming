// 8) Write a Program to Reverse a given Number N by user
#include<iostream>
using namespace std;
int main()
{
    int num,rev=0,rem;
    cin>>num;
    while (num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
        
    }
    cout<<rev;
    return 0;
}