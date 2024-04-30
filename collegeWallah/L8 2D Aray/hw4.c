// Write a program to print the row number having the maximum sum in a given matrix.
#include<stdio.h> 

int main()
{
    int arr[4][4] = {{1, 2, 3,4}, {3, 8, 50,4}, {5, 6, 22,4},{5,6,7,3}};
    int sum[4];
    for(int i=0;i<4;i++){
        sum[i]=0;
        for(int j=0;j<4;j++){
            sum[i]+=arr[i][j];
        }
    }
    int maxsum=sum[0];
    for(int i=0;i<4;i++){
        if(maxsum<sum[i])
        maxsum=sum[i];
    }
    for(int i=0;i<4;i++){
        if(maxsum==sum[i]){
            printf("The maximum sum row is %d and the sum is %d",i,maxsum);
        }
    }
    return 0;
}	