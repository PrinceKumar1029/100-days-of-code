#include <stdio.h>

int main()
{
    char str[100];
    int count[26] = {0};
    int i = 0, found = 0;

    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            count[str[i] - 'a']++;

            if (count[str[i] - 'a'] == 2)
            {
                printf("First repeating character = %c", str[i]);
                found = 1;
                break;
            }
        }

        i++;
    }

    if (!found)
        printf("No repeating character");

    return 0;
}
