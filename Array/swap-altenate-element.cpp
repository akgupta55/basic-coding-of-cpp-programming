#include <iostream>
using namespace std;

void rev(int arr[], int size)
{
    int st = 0;

    while (st < size-1)
    {
        swap(arr[st], arr[st+1]);
        st++;
    }
}

void printArray(int arr[],int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int num[6] = {2, 7, 11,4,1,3};

    // print array
    cout << "The value are :--" << endl;
    rev(num,6);
    printArray(num,6);

    return 0;
}
