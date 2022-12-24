#include <stdio.h>

#define N 5

int board[N][N] = {{0, 0, 0, 0, 0},
                   {0, 0, 0, 0, 0},
                   {0, 0, 0, 0, 0},
                   {0, 0, 0, 0, 0},
                   {0, 0, 0, 0, 0}};

void printSolution(int board[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            printf(" %d ", board[i][j]);
        printf("\n");
    }
    printf("\n");
}

int isAttack(int row, int col)
{
    int i, j;

    for (i = 0; i < row; i++)
    {
        printf("l1 ");
        if (board[i][col] == 1)
            return 1;
    }

    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        printf("l2  ");
        if (board[i][j] == 1)
            return 1;
    }

    for (i = row, j = col; i >= 0 && j < N; i--, j++)
    {
        printf("l3  ");
        if (board[i][j] == 1)
            return 1;
    }

    return 0;
}

int solveNQUtil(int row)
{

    printSolution(board);

    if (row == N)
        return 1;

    for (int i = 0; i < N; i++)
    {

        if (isAttack(row, i) == 0)
        {
            board[row][i] = 1;

            if (solveNQUtil(row + 1))
                return 1;

            board[row][i] = 0; // BACKTRACK
        }
    }

    return 0;
}

int main()
{

    if (solveNQUtil(0) == 0)
    {
        // printf("Solution does not exist");
    }

    printSolution(board);
    return 0;
}
