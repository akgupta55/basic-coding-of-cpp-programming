#include <stdio.h>
int s[] = {3, 4, 5, 2};
int sum = 9;
int n = 4;
int subsetSum(int n, int sum)
{
    printf("n = %d, sum = %d \n", n, sum);
    if (n == 0 || sum < 0)
        return 0;
    if (sum == 0)
        return 1;
    int t = subsetSum(n - 1, sum - s[n - 1]);
    if (t == 0)
        t = subsetSum(n - 1, sum);
    return t;
}

int main()
{
    printf("%d", subsetSum(4, 9));
    return 0;
}