// 2) Write a Program to Check Whether a Character is Vowel or Consonant.
#include<iostream>
using namespace std;
int main()
{
    char ch;
    bool isLowerCase,isUpperCase;
    cout<<"Enter a charcter ::---\n";
    cin>>ch;
    isLowerCase=(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
    isUpperCase=(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
    if (!isalpha(ch))
    {
        cout<<"not charcter";
    }
    else if (isLowerCase||isUpperCase)
    {
        cout<<"charcter"<<" "<<ch<<" "<<"is vowel." ;

    }
    else
    {
        cout<<"consonant.";
    }
        
    
    return 0;
}