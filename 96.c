#include <stdio.h>

int main()
{
    char str[200], word[100];
    int i = 0, j = 0, k;

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
            for (k = j - 1; k >= 0; k--)
                printf("%c", word[k]);

            j = 0;

            if (str[i] == ' ')
                printf(" ");
            else
                break;
        }

        i++;
    }

    return 0;
}

//Used AI
