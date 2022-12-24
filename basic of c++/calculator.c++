#include<iostream>
using namespace std;
int main()
{
    int a,b,op,add,sub,mul,div,mod;
    cout<<"Enter a and b :-"<<endl;
    cin>>a>>b;
    cout<<"Select operation :-"<<endl;
    cin>>op;
    switch (op)
    {
    case 1: add=a+b;
        cout<<"sum = "<<add<<endl;
        break;
    case 2: sub=a-b;
        cout<<"sub = "<<sub<<endl;
        break;
    case 3: mul=a*b;
        cout<<"mul = "<<mul<<endl;
        break;
    case 4: div=a/b;
        cout<<"div = "<<div<<endl;
        break;
    case 5: mod=a%b;
        cout<<"mod = "<<mod<<endl;
        break;
    default:
        cout<<"wrong choice"<<endl;
        break;
    }
}