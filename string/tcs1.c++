// Program to count vowels, consonant, digits and special characters in string.

// Input : str = "geeks for geeks121"
// Output : Vowels: 5
//          Consonant: 8
//          Digit: 3
//          Special Character: 2

// Input : str = " A1 B@ d  adc"
// Output : Vowels: 2
//          Consonant: 4
//          Digit: 1
//          Special Character: 6

#include <bits/stdc++.h>
// #include <string.h>
using namespace std;

void counterOfString(string &str)
{

    int vowel = 0, consonant = 0, digit = 0, specialCharacter = 0;

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            ch = tolower(ch);

            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowel++;
            }
            else
            {
                consonant++;
            }
        }
        else if (ch >= '0' && ch <= '9')
        {
            digit++;
        }
        else
        {
            specialCharacter++;
        }
    }

    cout << "Vowel : " << vowel << endl;
    cout << "Consonant : " << consonant << endl;
    cout << "Digit : " << digit << endl;
    cout << "Special Character : " << specialCharacter << endl;
}

int main()
{
    string str = "ajay is 21 year old.";
    counterOfString(str);
    return 0;
}
