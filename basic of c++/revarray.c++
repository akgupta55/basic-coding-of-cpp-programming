#include <iostream>
using namespace std;
// max min time com. o(n),space com. 0(1)
int findSum(int A[], int N)
{
    // code here.
    int max = INT_MIN;
    int min = INT_MAX;
    for (int i = 0; i < N; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
        if (A[i] < min)
        {
            min = A[i];
        }
    }
    int sum = min + max;
    return sum;
}
int main()
{
    int t;
    cin >> t;
    while (t != 0)
    {
        int n, arr[100];
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        // rev arr time comp. o(n) space compl. 0(1)
        int l = 0, e = n - 1;
        while (l < e)
        {
            swap(arr[l], arr[e]);
            l++;
            e--;
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i];
        }

        t--;
    }
    return 0;
}
