// Attempt problem 4 using calloc
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)calloc(5 , sizeof(int));
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("Enter %d element: \n", i + 1);
    //     scanf("%d", &ptr[i]);
    // }
    for (int i = 0; i < 5; i++)
    {
        printf("the %d element is: %d\n", i + 1,ptr[i]);
    }
    realloc(ptr, 10 * sizeof(int));
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("Enter %d element: \n", i + 1);
    //     scanf("%d", &ptr[i]);
    // }
    for (int i = 0; i < 10; i++)
    {
        printf("the %d element is: %d\n", i + 1,ptr[i]);
    }
    free(ptr);
    return 0;
}