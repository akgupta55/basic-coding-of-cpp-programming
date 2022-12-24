#include <stdio.h>
int main()
{
    int n;
    int A[][] = {{0, 3, 8, 91, -4},
                 {99, 0, 99, 1, 7},
                 {99, 4, 0, 99, 99},
                 {2, 99, -5, 0, 19},
                 {99, 99, 99, 6, 0}};
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                    continue;
                if (k == i || k == j)
                    continue;
                D[i][j] = min(D[i][j], D[i][j] + D[k][j]);
            }
                
        }
    }

        
}
