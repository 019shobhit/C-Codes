#include<stdio.h> 
void reverse(int ,int[]);

int main(){
    int arr[]={1,2,3,4,5,6,7};
    reverse(7,arr);
    for(int i=0;i<7;i++){
        printf("the value of %d element is %d \n",i+1,arr[i]);
    }
    return 0;
}

void reverse(int n,int a[]){
    int temp;
    for(int i=0;i<n/2;i++){
        temp = a[i];
        a[i]= a[n-1-i];
        a[n-1-i] = temp;
    }
}
