#include <stdio.h>

int main()
{
    int a[10][10], r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Diagonal traversal: ");

    for (i = 0; i < r; i++)
        if (i < c)
            printf("%d ", a[i][i]);

    for (i = 0; i < r; i++)
    {
        j = c - 1 - i;

        if (j >= 0 && j < c && j != i)
            printf("%d ", a[i][j]);
    }

    return 0;
}
