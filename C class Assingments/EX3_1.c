// Write a Program to print Fibonacci Series
// 0,1,1,2,3,5,8,13,21....
#include<stdio.h> 

int main(){
    int n;
    int n1=0,n2=1,fib=0;;
    printf("enter number to get finonacci series on that term ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fib=n1+n2;
        printf("%d \t",fib);
        n1=n2;
        n2=fib;
    }
    return 0;
}