// 15) Write a Program to check whether a number entered by the user is an Armstrong number or not.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num,ldigit,sum=0;
    cin>>num;
    int onum=num;
    while (num>0)
    {
        ldigit=num%10;
        sum=sum+pow(ldigit, 3);
        num/=10;
    }
    if (onum==sum)
    {
        cout<<"Armstrong number "<<endl;
    }
    else
    cout<<"Not Armstrong number "<<endl;
    
    return 0;
}