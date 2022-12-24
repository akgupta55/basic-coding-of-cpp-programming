#include <stdio.h>
void selectionSort(int a[], int n)
{
    // int min;
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; i < n; i++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        if (min = !i)
        {
            int temp = a[min];
            a[min] = a[i];
            a[i] = temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
int main()
{
    int a[6] = {5, 1, 6, 2, 4, 3};
    int n = 6;
    selectionSort(a, n);
}
