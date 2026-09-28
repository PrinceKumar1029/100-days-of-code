#include <stdio.h>

int main()
{
    char a[100], b[100];
    int len1 = 0, len2 = 0, i, j, found = 0;

    printf("Enter first string: ");
    fgets(a, sizeof(a), stdin);

    printf("Enter second string: ");
    fgets(b, sizeof(b), stdin);

    while (a[len1] != '\0' && a[len1] != '\n')
        len1++;

    while (b[len2] != '\0' && b[len2] != '\n')
        len2++;

    if (len1 == len2)
    {
        for (i = 0; i < len1; i++)
        {
            found = 1;

            for (j = 0; j < len1; j++)
            {
                if (a[j] != b[(i + j) % len1])
                {
                    found = 0;
                    break;
                }
            }

            if (found)
                break;
        }
    }

    if (found)
        printf("Rotation");
    else
        printf("Not a Rotation");

    return 0;
}
//Used AI