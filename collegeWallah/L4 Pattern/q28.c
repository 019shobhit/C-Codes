// 1 2 3 4 5 4 3 2 1 
// 1 2 3 4   4 3 2 1
// 1 2 3       3 2 1
// 1 2           2 1
// 1               1
#include <stdio.h>

int main()
{
    int n;
    printf("Enter How many Rows: ");
    scanf("%d", &n);
    for (int i = 1; i <=1; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d ",j);
        }
        for (int j = 1; j < n; j++)
        {
            printf("%d ",n-j);
        }
    }
    printf("\n");
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("%d ",j);
        }
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= n - i; j++)
        {
            printf("%d ",n-j-i+1);
        }
        printf("\n");
    }
    return 0;
}