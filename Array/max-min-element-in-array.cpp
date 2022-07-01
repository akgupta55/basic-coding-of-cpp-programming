#include<iostream>
using namespace std;

int maxSize(int num[],int n)
{
    int max = INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(num[i]>max)
        {
            max=num[i];
        }

    }

    return max;

}

int minSize(int num[],int n)
{
    int min = INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(num[i]<min)
        {
            min=num[i];
        }

    }

    return min;

}

int main()
{
    int size;
    cin>>size;

    int arr[10];

    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    int maximumElement = maxSize(arr,size);
    cout<<"Maximum Element is :--"<<endl<<maximumElement<<endl;

    int minimumElement = minSize(arr,size);
    cout<<"Minimum Element is :--"<<endl<<minimumElement<<endl;
    
    return 0;


}