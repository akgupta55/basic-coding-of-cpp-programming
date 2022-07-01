#include <iostream>
using namespace std;

void rev(int arr[], int size)
{
    int st = 0;
    int end = size - 1;

    while (st <= end)
    {
        swap(arr[st], arr[end]);
        st++;
        end--;
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
    int num[3] = {2, 7, 11};

    // print array
    cout << "The value are :--" << endl;
    rev(num,3);
    printArray(num,3);

    return 0;
}
