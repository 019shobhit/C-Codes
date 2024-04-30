// * * * * * * 
// *         *
// *         *
// * * * * * *
#include <stdio.h>

int main()
{
    int n;
    printf("enter how many row: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + (n / 2); j++)
        {
            if (i == 1 || j == 1 || i ==n || j==n + (n / 2))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}