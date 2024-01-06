#include <stdio.h>

int main()
{
    int num1, num2, num3, num4;
    printf("enter four numbers to check which is greatest");
    scanf("%d%d%d%d", &num1, &num2, &num3, &num4);
    if (num1 < num2)
    {
        if (num2 < num3)
        {
            if (num3 < num4)
            {
                printf("number %d is gratest", num4);
            }
            else
            {
                printf("number %d is gratest", num3);
            }
        }
        else if (num2 < num4)
        {
            printf("number %d is gratest", num4);
        }
        else
        {
            printf("number %d is gratest", num2);
        }
    }
    else if (num1 < num3)
    {
        if (num3 < num4)
        {
            printf("number %d is gratest", num4);
        }
        else
        {
            printf("number %d is gratest", num3);
        }
    }
    else if (num1 < num4)
    {
        printf("number %d is gratest", num4);
    }
    else
    {
        printf("number %d is gratest", num1);
    }
    return 0;
}