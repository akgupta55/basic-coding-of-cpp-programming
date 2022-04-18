//6) Write a Program to Swap Two Numbers
// Method 1: Swap Numbers (Using Temporary Variable)
#include <iostream>
using namespace std;
int mathod1()
{
int a = 5, b = 10, temp;
cout<<"\n\nMATHOD1\n\n";
cout << "Before swapping." << endl;
cout << "a = " << a << ", b = " << b << endl;
temp = a;
a = b;
b = temp;
cout << "\nAfter swapping." << endl;
cout << "a = " << a << ", b = " << b << endl;
return 0;
}

/*
Output
Before swapping.
a = 5, b = 10
After swapping.
a = 10, b = 5
*/

// Method 2: Swap Numbers Without Using Temporary Variables


int mathod2()
{
int a = 5, b = 10;
cout<<"\n\nMATHOD2\n\n";
cout << "Before swapping." << endl;
cout << "a = " << a << ", b = " << b << endl;
a = a + b;
b = a - b;
a = a - b;
cout << "\nAfter swapping." << endl;
cout << "a = " << a << ", b = " << b << endl;
return 0;
}

int main()
{
    mathod1();
    mathod2();
    return 0;
}
/*CONCEPT:
Initially, a = 5 and b = 10.
Then, we add a and b and store it in a with the code a = a + b. This means a = 5 + 10.
So, a = 15 now.
Then we use the code b = a - b. This means b = 15 - 10. So, b = 5 now.
Again, we use the code a = a - b. This means a = 15 - 5. So finally, a = 10.
Hence, the numbers have been swapped.
Note: We can also use multiplication and division instead of addition and subtraction.
However, this won't work if one of the numbers is 0.
int a = 5, b = 10;
// using multiplication and division for swapping
a = a * b; // a = 50
b = a / b; // b = 5
a = a / b; // a = 10
*/