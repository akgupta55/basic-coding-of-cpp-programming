// reverse the string in such a way that the position of number in the string are left unaltered

#include <bits/stdc++.h>
using namespace std;

bool isAlphabet(char x)
{

    return ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z'));
}

void reverse(string str)
{
    int l = 0;
    int r = str.length() - 1;
    while (l < r)
    {
        if (!isAlphabet(str[l]))
        {
            l++;
        }
        else if (!isAlphabet(str[r]))
        {
            r--;
        }
        else
        {
            swap(str[l], str[r]);
            l++;
            r--;
        }
    }
    cout << str;
}

int main()
{
    string str;
    cin >> str;
    reverse(str);
    return 0;
}