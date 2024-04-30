//         A 
//       A B
//     A B C
//   A B C D
// A B C D E
#include <stdio.h>

int main()
{
    int n;
    printf("enter how many row: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <=  i; j++)
        {
            printf("%c ",64+j);
        }
        printf("\n");
    }
    return 0;
}