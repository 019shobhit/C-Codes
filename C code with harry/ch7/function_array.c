#include<stdio.h> 
void inputarray(int[],int);
void outputarray(int[],int);


int main(){
    int x;
    printf("enter element to get of that number array \n");
    scanf("%d",&x);
    int arr[x];
    inputarray(arr,x);
    outputarray(arr,x);
    return 0;
}

void inputarray(int a[],int n){
    for(int i=0;i<n;i++){
        printf("enter %d element of array \n",i+1);
        scanf("%d",&a[i]);
    }
}
void outputarray(int a[],int n){
    for(int i=0;i<n;i++){
        printf("the %d element of array is: %d \n ",i+1,a[i]);
    }
}
