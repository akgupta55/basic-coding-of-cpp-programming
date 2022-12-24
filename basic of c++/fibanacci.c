#include <stdio.h>
void fib(int num, int a, int b)
{
    if (a == num)
    {
        return;
    }
    printf("%d", a);

    fib(num, b, a + b);
}
int main()
{
    int num;
    scanf("%d", &num);
    fib(num, 0, 1);
    return 0;
}