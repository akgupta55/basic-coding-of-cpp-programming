// 10) Write a Program to Calculate Power of a Number using inbuilt pow() function by 
// taking two inputs from users as Base and exponent respectively

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float expo,base;
    cin>>base>>expo;
    float ans=pow(base, expo);
    cout << base << "^" << expo << " = " << ans;
    return 0;
}