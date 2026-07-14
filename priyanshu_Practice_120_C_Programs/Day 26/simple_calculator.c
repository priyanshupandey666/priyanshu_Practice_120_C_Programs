#include <stdio.h>

int main()
{
    int num1, num2, choice;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Result = %d", num1 + num2);
            break;

        case 2:
            printf("Result = %d", num1 - num2);
            break;

        case 3:
            printf("Result = %d", num1 * num2);
            break;

        case 4:
            if(num2 != 0)
                printf("Result = %.2f", (float)num1 / num2);
            else
                printf("Division by zero is not allowed.");
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}