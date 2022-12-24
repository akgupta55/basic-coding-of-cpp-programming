#include <stdio.h>
int n = 6;
int c[6] = {0, 0, 0, 0, 0, 0};
int cl = 3;
int g[6][6] = {{0, 1, 1, 0, 1, 0}, {1, 0, 1, 1, 1, 0}, {1, 1, 0, 1, 1, 0}, {0, 1, 1, 0, 1, 1}, {1, 1, 1, 1, 0, 1}, {0, 0, 0, 1, 1, 0}};
void disp();
int isSame(int v, int color)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (g[v][i] != 0 && c[i] == color)
        {
            return 1;
        }
    }
    return 0;
}
int graphcoloring(int v)
{
    int i;
    disp();
    if (v == n)
        return 1;
    for (i = 1; i <= cl; i++)
    {
        if (isSame(v, i) == 0)
        {
            c[v] = i;
            int t = graphcoloring(v + 1);
            if (t == 1)
                return 1;
            else
                c[v] = 0;
        }
    }
    return 0;
}
void disp()
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d", c[i]);
    }
    printf("\n");
}
int main()
{
    printf("%d", graphcoloring(0));
    return 0;
}