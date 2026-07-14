#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], temp;
    int i, j, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    if(str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
        len--;
    }

    for(i = 0; i < len - 1; i++)
    {
        for(j = i + 1; j < len; j++)
        {
            if(str[i] > str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    printf("Sorted String = %s", str);

    return 0;
}