// 11) Write a Program to Calculate Power of a Number without using inbuilt pow() function by 
// taking two inputs from users as Base and exponent respectively
#include<iostream>
using namespace std;
int main()
{
    int expo;
    float base,result=1;
    cin>>expo>>base;
    cout << base << "^" << expo << " = " ;
    while (expo!=0)
    {
        result*=base;
        --expo;
    }
    cout<< result;
    return 0;
}