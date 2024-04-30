// Find the second largest element in the given array.

#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int max=arr[0];
    int smax=arr[0];
    for(int i=0;i<10;i++){
        if(arr[i]>max)
        max=arr[i];
    }
    for(int i=0;i<10;i++){
        if(smax<arr[i] && arr[i]!=max)
        smax=arr[i];
    }
    printf("The second maximum value is %d",smax);
    return 0;
}