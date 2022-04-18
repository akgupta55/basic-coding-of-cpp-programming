#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int t;
   cin>>t;
   int a,b;
   while(t--){
    int rem=0,q=0;
    cin>>a>>b;
    rem=b/a;
    int mul=rem*a;
    if(mul<b){
    cout<<rem<<"\n";
    }
    else if(a>=b)
    {
        cout<<q<<endl;
    } 
   }
   return 0;
}