#include <stdio.h>
#include <math.h>

int main()
{
    int binary, digit, decimal = 0, i = 0;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while(binary != 0)
    {
        digit = binary % 10;
        decimal = decimal + digit * pow(2, i);
        binary = binary / 10;
        i++;
    }

    printf("Decimal = %d", decimal);

    return 0;
}