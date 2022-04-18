// 4) Write a program where the user is asked to enter two integers (divisor and dividend) and 
// the quotient and the remainder of their division is computed.(Both divisor and
// dividend should be integers.)
#include<iostream>
using namespace std;
int main()
{
    int d1,d2,q,r;
    cout<<"Enter dividend and divisor ::---"<<endl;
    cin>>d1>>d2;
    q=d1/d2;
    cout<<"quotient is ::--"<<q<<endl;
    r=d1%d2;
    cout<<"Remainder is ::---"<<r<<endl;
    return 0;
}