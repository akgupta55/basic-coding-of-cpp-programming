#include<iostream>
using namespace std;

void mergesort(int arr[],int s,int e)
{
    //base case
    if (s>=e)
    {
        return ;
    }
    
    //for left part sorting
    
}

int main()
{
    int arr[5]={2,4,1,5,3};
    int n=5;

    mergesort(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}