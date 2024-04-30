//  print pascal trangle without sing ncr function
#include <stdio.h>

int main()
{
    int n;
    printf("Enter how many rows: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        int x=1;
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", x);
            x = x * (i - j ) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}