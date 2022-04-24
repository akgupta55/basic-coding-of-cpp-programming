// 1) Write a Program to Make a Simple Calculator to Add, Subtract, Multiply or Divide Using Switch case
// The program should takes an arithmetic operator (+, -, *, /) and two operands from a user and
// performs the operation on those two operands depending upon the operator entered by the user.

#include <iostream>
using namespace std;
int main()
{
    int choice, a, b, c = 0;
    cout << "Enter a and b operand ::--- " << endl;
    cin >> a >> b;
    cout << "Enter choice(1-4) ::--- " << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        c = a + b;
        cout << "Sum= " << c << endl;
        break;
    case 2:
        c = a - b;
        cout << "Diffrence= " << c << endl;
        break;
    case 3:
        c = a * b;
        cout << "Multiplication= " << c << endl;
        break;
    case 4:
        c = a / b;
        cout << "Division= " << c << endl;
        break;
    default:
        cout << " Wrong choice!!!" << endl;
        break;
    }
    return 0;
}