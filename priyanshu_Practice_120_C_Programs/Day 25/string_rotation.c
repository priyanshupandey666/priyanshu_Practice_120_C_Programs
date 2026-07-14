#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int n, len, i;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter rotation count: ");
    scanf("%d", &n);

    len = strlen(str);
    n = n % len;

    printf("Rotated String = ");

    for(i = n; i < len; i++)
        printf("%c", str[i]);

    for(i = 0; i < n; i++)
        printf("%c", str[i]);

    return 0;
}