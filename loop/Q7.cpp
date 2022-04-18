//7) Write a Program to Find LCM of two numbers entered by user
#include<iostream>
using namespace std;
int main()
{
    int n1,n2,max;
    cin>>n1>>n2;

    max=(n1>n2)?n1:n2;

    do
    {
        if (max%n1==0&&max%n2==0)
        {
            cout<<"lcm= "<<max;
            break;
        }
        else
        ++max;
    } while (true);
    return 0;
}