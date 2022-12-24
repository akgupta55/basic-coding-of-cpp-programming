// arr[8]={1,3,5,7,2,4,6,8}; input where size is 2n;
// output arrnew[8]={1,2,3,4,5,6,7,8}

#include <iostream>
#include <stack>
using namespace std;

void arrNew(int arr[], int n)
{
    stack<int> ans;
    int a = 0;
    int b = n + 1;
    for (int i = a; i < n; i++)
    {
        for (int j = b; j < n; j++)
        {
            ans.push(i);
            ans.push(j);
        }
    }
    while (!ans.empty())
    {
        cout << ' ' << ans.top();
        ans.pop();
    }
}

int main()
{
    int n = 4;
    int arr[8] = {1, 3, 5, 7, 2, 4, 6, 8};
    arrNew(arr, n);
}