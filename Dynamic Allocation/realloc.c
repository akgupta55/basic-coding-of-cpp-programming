#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p = malloc(sizeof(int) * 5);
    if (p != NULL)
    {
        for (int i = 0; i < 5; i++)
        {
            scanf("%d", p + i);
        }
        for (int i = 0; i < 5; i++)
        {
            printf("%d  ", *(p + i));
        }
        //      OR
        printf("\n");
        for (int i = 0; i < 5; i++)
        {
            printf("%d  ", p[i]);
        }
    }
    p = realloc(p, 10 * sizeof(int));
    if (p != NULL)
    {
        for (int i = 5; i < 10; i++)
        {
            scanf("%d", p + i);
        }
        for (int i = 0; i < 10; i++)
        {
            printf("%d  ", *(p + i));
        }
        //      OR
        printf("\n");
        for (int i = 0; i < 10; i++)
        {
            printf("%d  ", p[i]);
        }
    }
}
