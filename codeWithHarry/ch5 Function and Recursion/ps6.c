#include<stdio.h> 
int sum(int);

int main(){
    int num;
    printf("enter number to get the sum : ");
    scanf("%d",&num);
    int a=sum(num);
    printf("the sum is : %d",a);
    return 0;
}

int sum(int n){
    if (n==1){
        return 1;
    }
    else{
        return n+ sum(n-1);
    }
}