#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int total = 0, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers (from 1 to %d with one missing):\n", n, n + 1);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    total = (n + 1) * (n + 2) / 2;

    printf("Missing Number = %d", total - sum);

    return 0;
}