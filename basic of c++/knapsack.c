#include <stdio.h>
int wt[] = {1, 2, 3, 4};
int pr[] = {40, 20, 30, 10};
int max(int a, int b) { return (a > b) ? a : b; }
int k(int n, int w)
{
    if (n == 0 || w == 0)
    {
        return 0;
    }
    if (wt[n - 1] > w)
    {
        k(n - 1, w);
    }
    else
    {
        return max(k(n - 1, w), pr[n - 1] + k(n - 1, w - wt[n - 1]));
    }
}
int main()
{
    printf("%d", k(4, 3));
    return 0;
}