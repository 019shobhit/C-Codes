// A B C D E F G H I 
// A B C D   F G H I 
// A B C       G H I 
// A B           H I 
// A               I  
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
            printf("%c ",i+64);
        }
    }
    printf("\n");
    for (int i = 1; i < n; i++)
    {
        int x=1;
        for (int j = 1; j <= n - i; j++)
        {
            printf("%c ",x+64);
            x++;
        }
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            printf("  ");
            x++;
        }
        for (int j = 1; j <= n - i; j++)
        {
            printf("%c ",x+64);
            x++;
        }
        printf("\n");
    }
    return 0;
}