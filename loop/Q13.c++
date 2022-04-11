// 13) Write a Program to Check Whether a Number is Prime or Not
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, m = 0, flag=0;
    cout << "Enter no.::--" << endl;
    cin >> n;
    // m=n/2;//12 HAVE THE FACTOR 1 2 3 4 6 12 ON ITERATION 2 TO N-1 NOW WE HAVE FACTOR LEFTOVER ARE 2.....11 BY MAKING
    // N/2 FACTOR BECOME 12/2=6 NOW ITERATION SHOULD BE 2....6 for larger no. it find  prime no. by iterating half
    m=sqrt(n);// we can also use sqrt(n) for finding prime easily for large by less iteration
    for (int i = 2; i < m; i++)
    {
        if (n % i == 0)
        {
            cout << "Not a Prime." << endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout << "It is Prime number." << endl;
    }
    return 0;
}