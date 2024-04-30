
//         1 
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1
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
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",j);
        }
        for(int j=1;j<=i-1;j++){
            printf("%d ",i-j);
        }
        printf("\n");
    }
    return 0;
}