#include<stdio.h>
#include<stdlib.h>

void sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min_idx = i;
        for(int j=i+1;j<n;j++){
            if(arr[min_idx]>arr[j])min_idx=j;
        }
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

int main(){
    int arr[]={1,8,6,64,3,4,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, n);
    printf("sorted array\n");
    for(int i=0; i<n; i++){
        printf("%d\n", arr[i]);
    }
    return 0; 
}