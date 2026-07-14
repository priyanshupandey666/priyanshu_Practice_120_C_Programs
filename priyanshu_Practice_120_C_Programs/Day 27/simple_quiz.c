#include <stdio.h>

int main()
{
    int answer, score = 0;

    printf("Q1. Capital of India?\n");
    printf("1. Delhi\n2. Mumbai\n3. Chennai\n4. Kolkata\n");

    scanf("%d", &answer);

    if(answer == 1)
    {
        score++;
    }

    printf("Your Score = %d", score);

    return 0;
}