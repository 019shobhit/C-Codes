// Write a program to copy the ontent of one array into another in the reverse order.

#include <stdio.h>

int main()
{
    int arr1[11] = {1, 2, 3, 6, 7, 8, 9, 10, 10, 5, 6};
    int arr2[11];
    int i = 0;
    while (i < 11)
    {
        arr2[i] = arr1[10 - i];
        i++;
    }
    for (int i = 0; i < 11; i++)
    {
        printf("%d\t", arr1[i]);
    }
    printf("\n");
    for (int i = 0; i < 11; i++)
    {
        printf("%d\t", arr2[i]);
    }
    return 0;
}