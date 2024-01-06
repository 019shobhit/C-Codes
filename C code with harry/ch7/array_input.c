#include <stdio.h>

int main()
{
    int marks[4];
    printf("enter marks 1 : ");
    scanf("%d", &marks[0]);
    printf("enter marks 2 : ");
    scanf("%d", &marks[1]);
    printf("enter marks 3 : ");
    scanf("%d", &marks[2]);
    printf("enter marks 4 : ");
    scanf("%d",&marks[3]);

    printf("The marks are : %d ,%d ,%d & %d",marks[0],marks[1],marks[2],marks[3]);

    return 0;
}