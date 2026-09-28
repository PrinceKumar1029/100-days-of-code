#include <stdio.h>

int main()
{
    int a[100], n, value, i, position = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to delete: ");
    scanf("%d", &value);

    for (i = 0; i < n; i++)
    {
        if (a[i] == value)
        {
            position = i;
            break;
        }
    }

    if (position == -1)
    {
        printf("Element not found");
    }
    else
    {
        for (i = position; i < n - 1; i++)
            a[i] = a[i + 1];

        n--;

        printf("Array: ");
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
    }

    return 0;
}
