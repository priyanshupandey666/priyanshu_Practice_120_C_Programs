#include <stdio.h>

int main()
{
    float marks[5], total = 0, percentage;
    int i;

    printf("Enter marks of 5 subjects:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    percentage = total / 5;

    printf("Total = %.2f\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    if(percentage >= 40)
        printf("Result : Pass");
    else
        printf("Result : Fail");

    return 0;
}