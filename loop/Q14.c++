// 14) Write a Program to Display Prime Numbers Betweenn Two Intervals (entered by user)
// Example:
// Enter two numbers: 0 20
// Prime numbers between 0 and 20 are:
// 2 3 5 7 11 13 17 19
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int num1, num2, flag, i;
    cin >> num1 >> num2;
    cout << "Prime number between " << num1 << " to " << num2 << " are ::-- " << endl;
    while (num1 <= num2)
    {
        flag = 0;
        if (num1 == 0 || num1 == 1 || num2==1)
        {
            flag = 1;
        }
        for (i = 2; i <= num1/2; i++)
        {
            if (num1 % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << num1 << endl;
        }
        num1 = num1 + 1;
    }
    return 0;
}