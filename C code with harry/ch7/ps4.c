#include <stdio.h>

int main()
{
    int arr[10],n;
    printf("enter number to get mutiplication table");
    scanf("%d",&n);
    for(int i=0;i<10;i++){
        arr[i]=(i+1)*n;
    }
    for(int i=0;i<10;i++){
        printf(" %d X %d  =  %d \n",n,i+1,arr[i]);
    }
    return 0;
}