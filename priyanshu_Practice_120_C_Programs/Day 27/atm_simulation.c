#include <stdio.h>

int main()
{
    int pin = 1234;
    int enteredPin;
    float balance = 5000, amount;

    printf("Enter PIN: ");
    scanf("%d", &enteredPin);

    if(enteredPin == pin)
    {
        printf("Enter withdrawal amount: ");
        scanf("%f", &amount);

        if(amount <= balance)
        {
            balance = balance - amount;
            printf("Withdrawal Successful\n");
            printf("Remaining Balance = %.2f", balance);
        }
        else
        {
            printf("Insufficient Balance");
        }
    }
    else
    {
        printf("Incorrect PIN");
    }

    return 0;
}