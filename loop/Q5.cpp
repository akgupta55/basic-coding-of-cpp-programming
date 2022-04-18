// 5) Write a Program to Display Fibonacci Series upto certain number n (n is entered by user)
/*Example: n=100
Output:
Fibonacci Series: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89,*/
#include <iostream>
using namespace std;
int main()
{
    int n, tr1 = 0, tr2 = 1, nextTerm = 0;
    cin >> n;
        cout<<"fibonacci series ::--\n"<<tr1<<" , "<<tr2<<" , ";
            nextTerm = tr1 + tr2;
            while (nextTerm<=n)
            {
                cout << nextTerm << " , ";
                tr1 = tr2;
                tr2 = nextTerm;
                nextTerm = tr1 + tr2;
            }
    return 0;
}