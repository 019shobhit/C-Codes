// If an array arr contains n elements, then check if the given array is a palindrome or not.

#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 5, 4, 3, 2, 1};
    int i = 0, j = 7;
    int flag = 0;
    while (i <= j)
    {
        if (arr[i] != arr[j])
        {
            flag = 1;
            break;
        }
        i++;
        j--;
    }
    if(flag==0){
        printf("Array is palindrome");
    }
    else{
        printf("Not a palindrome array");
    }

    return 0;
}