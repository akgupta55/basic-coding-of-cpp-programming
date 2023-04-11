// TCS NQT Coding Question 2022 – September Day 1 – Slot 1
// Problem Statement – Given a string S(input consisting) of ‘*’ and ‘#’. The length of the string is variable. The task is to find the minimum number of ‘*’ or ‘#’ to make it a valid string. The string is considered valid if the number of ‘*’ and ‘#’ are equal. The ‘*’ and ‘#’ can be at any position in the string.

// Note : The output will be a positive or negative integer based on number of ‘*’ and ‘#’ in the input string.

// (*>#): positive integer
// (#>*): negative integer
// (#=*): 0

// Example 1:

// Input 1:

// ###***   -> Value of S
// Output :

// 0   → number of * and # are equal

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int c1 = 0, c2 = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '*')
        {
            c1++;
        }
        else if (str[i] == '#')
        {
            c2++;
        }
    }
    cout << c2 - c1;

    // if (c1 == c2)
    // {
    //     cout << 0;
    // }
    // else if (c1 > c2)
    // {
    //     cout << "postive";
    // }
    // else if (c1 < c2)
    // {
    //     cout << "negative";
    // }
}