
// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1 
#include <stdio.h>

int main()
{
    int n;
    printf("enter how many row: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", (i+j-1)%2);
        }
        printf("\n");
    }
    return 0;
}