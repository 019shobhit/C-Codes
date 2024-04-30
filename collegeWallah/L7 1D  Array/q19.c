// Find the second largest element in single pass of Array

#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 6, 7, 8, 9, 10,10, 5, 6};
    int max = arr[0];
    int smax = arr[0];
    for(int i=0;i<10;i++){
        if(arr[i]>max){
            smax=max;
            max=arr[i];
        }
        else if(smax<arr[i] && arr[i]!=max){
            smax=arr[i];
        }
    }

    printf("The second maximum value is %d", smax);
    return 0;
}