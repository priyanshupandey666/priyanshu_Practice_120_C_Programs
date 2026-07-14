#include <stdio.h>

int main()
{
    int choice;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Exit\n");

    printf("Enter Choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Addition Selected");
            break;

        case 2:
            printf("Subtraction Selected");
            break;

        case 3:
            printf("Exit");
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}