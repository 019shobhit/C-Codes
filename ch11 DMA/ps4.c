// Create an array dynamically capable of storing 5 integers. now use realloc so that it can store 10 integers.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        printf("Enter %d element: \n", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("the %d element is: %d\n", i + 1,ptr[i]);
    }
    realloc(ptr, 10 * sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        printf("Enter %d element: \n", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("the %d element is: %d\n", i + 1,ptr[i]);
    }
    free(ptr);
    return 0;
}