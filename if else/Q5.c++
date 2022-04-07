// 5) Write a Program to Check whether a year entered by user is Leap Year or not

//if year is divisible by 4 and not by 100 then is leap year else if year divisible 400 is also leap year


#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter year::--\n";
    cin>>a;

    if (((a%4==0)&&(a%100!=0))||(a%400==0))
    {
        cout<<"leap year";
    }
    else
    cout<<"not a leap year";

    /*if (a%4==0)
    {
        if (a%100==0)
        {
            if (a%400==0)
                cout<<"leap year";
            else
                cout<<"not a leap year";
        }
        else
            cout<<"leap year";
    }
    else
        cout<<"not a leap year";*/
    return 0;
}