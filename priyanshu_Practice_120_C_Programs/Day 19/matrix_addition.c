#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], sum[10][10];
    int row, col, i, j;

    printf("Enter rows and columns: ");
    scanf("%d%d", &row, &col);

    printf("Enter first matrix:\n");
    for(i = 0; i < row; i++)
        for(j = 0; j < col; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix:\n");
    for(i = 0; i < row; i++)
        for(j = 0; j < col; j++)
            scanf("%d", &b[i][j]);

    printf("Sum Matrix:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}