// Count the number of elements in the given array grater than a number x.

#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n,sum=0;
    printf("enter number: ");
    scanf("%d",&n);
    for(int i=0;i<10;i++){
        if(arr[i]>n){
            sum++;
        }
    }
    printf("%d",sum);
    return 0;
}