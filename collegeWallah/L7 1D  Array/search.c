#include <stdio.h>
#include <stdbool.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int x = 6;
    bool flag = false;
    int id=0;
    for (int i = 0; i <= 6; i++)
    {
        if (arr[i] == x)
        {
            flag =true;
            id=i;
            break;
        }
    }
    if (flag == true)
    {
        printf("%d number is present in the array at %d index",x,id);
    }
    else
    {
        printf("%d number is not present in the array",x);
    }
    return 0;
}