#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;
    int letters = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0')
    {
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            letters++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
        else if(str[i] != ' ' && str[i] != '\n')
        {
            special++;
        }

        i++;
    }

    printf("Letters = %d\n", letters);
    printf("Digits = %d\n", digits);
    printf("Special Characters = %d", special);

    return 0;
}