#include<stdio.h> 
void inputarray(int a[],int n){
    for(int i=0;i<n;i++){
        printf("enter %d array element \t",i+1);
        scanf("%d",&a[i]);
    }
}

void outputarray(int a[],int n){
    for(int i=0;i<n;i++){
        printf("the %d element is: %d \n",i+1,a[i]);
    }
}

void main(){
    int arr[5];

    inputarray(arr,5);
    outputarray(arr,5);

   
}





 