#include<iostream>
using namespace std;

void printArray(int arr[],int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int num[10]={2,7,11};

    //print array
    cout<<"The value are :--"<<endl;
    printArray(num,10);

    return 0;

}