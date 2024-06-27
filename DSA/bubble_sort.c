#include<stdio.h>
#include<stdlib.h>
void sort(int arr[],int n){
    int max;
    for(int i=0;i<n;i++){
        int flag = 0;
        for(int j=1;j<n-i;j++){
            if(arr[j]<arr[j-1]){
                flag =1;
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1]= temp;
            }
        }
        if(flag == 0){return;}
    }
}

int main(){
    int n;
    printf("Enter the size of array you want to create: ");
    scanf("%d",&n);
    int arr[n];
    printf("/n enter elements of the array to be sort: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    sort(arr,n);

    for(int i=0;i<n;i++){
        printf("%d \t",arr[i]);
    }
    return 0;
}
