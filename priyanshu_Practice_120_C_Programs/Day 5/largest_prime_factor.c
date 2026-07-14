#include <stdio.h>

int main()
{
    int num, i, j, largest = 0, count;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 2; i <= num; i++)
    {
        if(num % i == 0)
        {
            count = 0;

            for(j = 1; j <= i; j++)
            {
                if(i % j == 0)
                {
                    count++;
                }
            }

            if(count == 2)
            {
                largest = i;
            }
        }
    }

    printf("Largest Prime Factor = %d", largest);

    return 0;
}