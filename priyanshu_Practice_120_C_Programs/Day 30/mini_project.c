#include <stdio.h>

int main()
{
    int choice;
    float num1, num2;

    printf("===== MINI PROJECT =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter Choice: ");
    scanf("%d", &choice);

    printf("Enter First Number: ");
    scanf("%f", &num1);

    printf("Enter Second Number: ");
    scanf("%f", &num2);

    switch(choice)
    {
        case 1:
            printf("Result = %.2f", num1 + num2);
            break;

        case 2:
            printf("Result = %.2f", num1 - num2);
            break;

        case 3:
            printf("Result = %.2f", num1 * num2);
            break;

        case 4:
            if(num2 != 0)
                printf("Result = %.2f", num1 / num2);
            else
                printf("Division by zero is not allowed.");
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}