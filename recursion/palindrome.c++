#include <iostream>
using namespace std;

bool isPlanidrome(string &s, int i, int j)
{
    // base case

    if (i > j)
        return true;

    if (s[i] != s[j])
    {
        return false;
    }
    else
    {
        return isPlanidrome(s, i + 1, j - 1);
    }
}

int main()
{
    string str = "  ";

    bool ans = isPlanidrome(str, 0, str.length() - 1);

    if (ans)
    {
        cout << "It is a palindrome " << endl;
    }
    else
    {
        cout << "It is not a palindrome " << endl;
    }
}