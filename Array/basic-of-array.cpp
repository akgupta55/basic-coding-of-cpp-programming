#include<iostream>
using namespace std;
int main()
{
    //declearation
    int arr[15];

    //accessing array
    cout<<"The value of 0 index is "<<arr[0]<<endl;
    cout<<"The value of 14 index is "<<arr[14]<<endl;
    
    //it give warning becuse size of array is 15 and you want to access the 20 th index which is not present
    // for accessing 20 th index you have at least 21 size of an array ..
    // cout<<"The value of 20 index is "<<arr[20]<<endl;

    //initialising an array
    int second[10]={2,7};

    //accessing array
    // cout<<"The value of 0 index is "<<second[0]<<endl;

    int n=10;
    for(int i=0; i<n; i++)
    {
        cout<<second[i]<<" ";
    }
    cout<<endl;


    //initialising all element of an array with 0's
    int zero[15]={0};
    int size=15;
    for(int i=0; i<size; i++)
    {
        cout<<zero[i]<<" ";
    }
    cout<<endl;


    //initialising all element of an array with 1's but it is not possible -----> why ?????
    int one[15]={1};
    int num=15;
    for(int i=0; i<num; i++)
    {
        cout<<one[i]<<" ";
    }
    cout<<endl;

    // we find only actual length of array not no of elementas length of element
    
    int secondSize = sizeof(second)/sizeof(int);
    cout<<secondSize<<endl;

    int zeroSize = sizeof(zero)/sizeof(int);
    cout<<zeroSize<<endl;

    int oneSize = sizeof(one)/sizeof(int);
    cout<<oneSize<<endl;

    return 0;

}