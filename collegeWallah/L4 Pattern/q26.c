// 1 2 3 4 5 6 7 8 9 
// 1 2 3 4   6 7 8 9
// 1 2 3       7 8 9
// 1 2           8 9
// 1               9
#include <stdio.h>

int main()
{
    int n;
    printf("Enter How many Rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n*2-1; i++)
    {
        for (int j = 1; j < 2; j++)
        {
            printf("%d ",i);
        }
    }
    printf("\n");
    for (int i = 1; i < n; i++)
    {
        int x=1;
        for (int j = 1; j <= n - i; j++)
        {
            printf("%d ",x);
            x++;
        }
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            printf("  ");
            x++;
        }
        for (int j = 1; j <= n - i; j++)
        {
            printf("%d ",x);
            x++;
        }
        printf("\n");
    }
    return 0;
}