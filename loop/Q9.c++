//9) Write a Program to display sum of all digits of a given Number N by user
#include<iostream>
using namespace std;
int main()
{
    int num,rem,digit=0;
    cin>>num;
    while (num!=0)
    {
        rem=num%10;
        digit=digit+rem;
        num/=10;
    }
    cout<<"sum= "<<digit;
    return 0;
}