#include <stdio.h>

int main()
{
    int num, original, digit, i;
    int fact, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while(num != 0)
    {
        digit = num % 10;
        fact = 1;

        for(i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        num = num / 10;
    }

    if(sum == original)
        printf("Strong Number");
    else
        printf("Not Strong Number");

    return 0;
}