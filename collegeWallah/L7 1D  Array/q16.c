// Find the total number of pairs in the Array shose sum is equal to the given value x.

#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int x = 10;
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                printf("%d %d \n", arr[i], arr[j]);
            }
        }
    }
    return 0;
}