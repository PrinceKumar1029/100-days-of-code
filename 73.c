#include <stdio.h>

int main()
{
    int a[10][10], rowSum[10];
    int r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++)
    {
        rowSum[i] = 0;

        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
            rowSum[i] = rowSum[i] + a[i][j];
        }
    }

    for (i = 0; i < r; i++)
        printf("Row %d sum = %d\n", i + 1, rowSum[i]);

    return 0;
}
