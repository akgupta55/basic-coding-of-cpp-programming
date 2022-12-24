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

int isSafe(int row, int col)
{
    int i, j;

    // Check this row on left side
    for (i = 0; i < col; i++)
        // printf(" to %d \n", i);
        if (board[row][i])
            return 0;

    // Check upper diagonal on left side
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        // printf("1.from %d to %d \n", i, j);
        if (board[i][j])
            return 0;

    // Check lower diagonal on left side
    for (i = row, j = col; j >= 0 && i < N; i++, j--)
        // printf("2.from %d to %d \n", i, j);
        if (board[i][j])
            return 0;

    return 1;
}

int solveNQUtil(int col)
{

    printSolution(board);

    // base case: If all queens are placed then return true
    if (col >= N)
        return 1;

    // Consider this column and try placing this queen in all rows one by one
    for (int i = 0; i < N; i++)
    {
        // Check if the queen can be placed on board[i][col]
        if (isSafe(i, col))
        {
            // Place this queen in board[i][col]
            board[i][col] = 1;

            // recur to place rest of the queens in rest colunms
            if (solveNQUtil(col + 1))
                return 1;

            board[i][col] = 0; // BACKTRACK
        }
    }

    return 0;
}

int main()
{

    if (solveNQUtil(0) == 0)
    {
        printf("Solution does not exist");
    }

    printSolution(board);
    return 0;
}
