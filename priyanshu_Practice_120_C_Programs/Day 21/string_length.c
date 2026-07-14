#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0' && str[i] != '\n')
    {
        length++;
        i++;
    }

    printf("String Length = %d", length);

    return 0;
}