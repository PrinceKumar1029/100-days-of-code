#include <stdio.h>

int main()
{
    int a[10][10], n, i, j, k, distinct = 1;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < n; i++)
    {
        for (k = i + 1; k < n; k++)
        {
            if (a[i][i] == a[k][k])
            {
                distinct = 0;
                break;
            }
        }
    }

    if (distinct)
        printf("Diagonal elements are distinct");
    else
        printf("Diagonal elements are not distinct");

    return 0;
}
