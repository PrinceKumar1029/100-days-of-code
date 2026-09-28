#include <stdio.h>

int main()
{
    char a[100], b[100];
    int count1[256] = {0}, count2[256] = {0};
    int i, same = 1;

    printf("Enter first string: ");
    fgets(a, sizeof(a), stdin);

    printf("Enter second string: ");
    fgets(b, sizeof(b), stdin);

    for (i = 0; a[i] != '\0' && a[i] != '\n'; i++)
        count1[(unsigned char)a[i]]++;

    for (i = 0; b[i] != '\0' && b[i] != '\n'; i++)
        count2[(unsigned char)b[i]]++;

    for (i = 0; i < 256; i++)
    {
        if (count1[i] != count2[i])
        {
            same = 0;
            break;
        }
    }

    if (same)
        printf("Anagrams");
    else
        printf("Not Anagrams");

    return 0;
}
