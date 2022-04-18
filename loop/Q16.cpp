// 16) Write a Program to Display all Factors of a Number entered by User
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout<<"factor of "<<n<<endl;
    for (int i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            cout<<i<<endl;
        }
        
    }
    return 0;
}