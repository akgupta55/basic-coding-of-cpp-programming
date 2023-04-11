#include <stdio.h>
#include <math.h>
void armstrong(int s, int e)
{
    int num, n, arm = 0, i, sum;
    for (i = s; i <= e; i++)
    {
        num = i;
        sum = i;

        while (num != 0)
        {
            n = num % 10;
            arm = arm + pow(n, 3);
            num = num / 10;
        }
        if (sum == arm)
        {
            printf("%d\n", i);
        }
        arm = 0;
    }
}

void reverseLastDigit(int num)
{
    int First_Digit, Digits_Count, Last_Digit, x, y, swap_num;
    Digits_Count = log10(num);
    First_Digit = num / pow(10, Digits_Count);
    Last_Digit = num % 10;
    swap_num = Last_Digit;
    swap_num = swap_num * (round(pow(10, Digits_Count)));
    swap_num = swap_num + num % (int)(round(pow(10, Digits_Count)));
    swap_num = swap_num - Last_Digit;
    swap_num = swap_num + First_Digit;
    printf("The Number after Swapping First Digit and Last Digit is =  %d", swap_num);
}

int main()
{
    int a1, a2, num;
    printf("Enter two number to print all armstrong number between :--\n");
    scanf("%d%d", &a1, &a2);
    armstrong(a1, a2);

    printf("\nEnter number to reverse the first and last digit :--\n");
    scanf("%d", &num);
    reverseLastDigit(num);
}