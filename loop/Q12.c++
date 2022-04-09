// 12) Write a Program to Check Whether a Number N entered by user is Palindrome or Not
#include<iostream>
using namespace std;
int main()
{
    int num,digit,rev=0;
    cout<<"Enter number::--";
    cin>>num;
    int n=num;//imp because if have compare tis to rev no. num become zero or undifine after while
    while (num!=0)
    {
        digit=num%10;
        rev=rev*10+digit;
        num/=10;
    }
    cout<<"Reversed number::--\n"<<rev<<endl;
    if (n==rev)
    {
        cout<<"It is Palindrome.";
    }
    else
        cout<<"It is not a Palindrome.";
    return 0;
}