#include <stdio.h>

int main()
{
    int marks[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter %d row element %d column eleement", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d \t", marks[i][j]);
        }
        printf("\n"); 
    }
    return 0;
}