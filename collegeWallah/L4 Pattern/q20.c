//         * 
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *
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
        for (int j = 1; j <=  (i*2)-1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}