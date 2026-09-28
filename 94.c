#include <stdio.h>

int main()
{
    char str[200], word[100], longest[100];
    int i = 0, j = 0, maxLength = 0, length;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1)
    {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\0')
        {
            word[j] = str[i];
            j++;
        }
        else
        {
            word[j] = '\0';
            length = j;

            if (length > maxLength)
            {
                maxLength = length;

                for (j = 0; j <= length; j++)
                    longest[j] = word[j];
            }

            j = 0;

            if (str[i] == '\0' || str[i] == '\n')
                break;
        }

        i++;
    }

    printf("Longest word = %s", longest);

    return 0;
}
