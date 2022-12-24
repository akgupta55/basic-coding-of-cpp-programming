#include <stdio.h>
#define N 4
int s[4][4] = {{0, 2, 0, 3},
               {1, 0, 4, 0},
               {0, 4, 0, 1},
               {3, 0, 2, 0}};

void disp()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", s[i][j]);
        }
        printf("\n");
    }
}

int isVaild(int row, int col, int num)
{
    for (int i = 0; i < N; i++)
    {
        if (s[row][i] == num)
        {
            return 0;
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (s[i][col] == num)
        {
            return 0;
        }
    }
    return 1;
}

int solveSudoku(int row, int col)
{
    // disp();
    if (row == N - 1 && col == N)
        return 1;
    if (col == N)
    {
        row++;
        col = 0;
    }
    if (s[row][col] > 0)
        return solveSudoku(row, col + 1);

    for (int num = 1; num <= N; num++)
    {
        if (isVaild(row, col, num) == 1)
        {
            s[row][col] = num;
            if (solveSudoku(row, col + 1) == 1)
                return 1;
        }
        s[row][col] = 0;
    }
    return 0;
}

int main()
{
    // disp();
    if (solveSudoku(0, 0) == 1)
        disp();
    else
        printf("No solution exists");
    return 0;
}