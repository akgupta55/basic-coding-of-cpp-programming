//2) Write a Program to Find Factorial of a given number N (N is entered by user)
#include<iostream>
using namespace std;
int main()
{
    int n,fact=1;
    cin>>n;
    if (n==0)
    {
        cout<<"factorial is 1";
    }
    else if (n!=0)
    {
        for (int i = 1; i <=n; ++i)
        {
            fact=fact*i;
        }
        cout<<"factorial is "<<fact<<endl;
        
    }
    return 0;
    
}