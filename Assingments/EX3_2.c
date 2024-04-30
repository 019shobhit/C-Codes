//  Write a Program to Calculate Factorial 
#include<stdio.h> 

int main(){
    int num,fact=1;
    printf("enter number to print factorial of that number");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        fact*=i;
    }
    printf("THe factorial is %d",fact);
    return 0;
}