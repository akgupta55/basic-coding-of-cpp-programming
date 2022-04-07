//3) Write a Program to Generate Multiplication Table of a number (entered by the user) using a for loop.
#include<iostream>
using namespace std;
int main()
{
    int n,mul=1;
    cin>>n;
    for (int i = 1; i <=10; i++)
    {
        mul=i*n;
        cout<<n<<" * "<<i<<" = "<<mul<<endl;
    }
    return 0;
}