#include <stdio.h>
int max(int a, int b)
{
    // printf("hello");
    return (a > b) ? a : b;
}
int main()
{
    // printf("hello");
    int n = 4;
    int w = 3;
    int wt[] = {1, 1, 1, 1};
    int p[] = {40, 20, 30, 10};
    int k[n][w];
    for (int i = 0; i < n; i++)
    {
        k[i][0] = 0;
    }
    for (int i = 0; i < w; i++)
    {
        k[0][i] = 0;
    }
    // printf("hello");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            k[i][j] = max(k[i - 1][j], p[i - 1] + k[i - 1][j - wt[i - 1]]);
            // printf("%d %d \n", j, k[i][j]);
        }
    }
    // printf("\nhello");
    // for (int i = 0; i <= n; i++)
    // {
    // for (int j = 0; j <= w; j++)
    // {
    /* code */
    printf("%d ", k[n][w]);
    // }
    // printf("\n");
    // }
}