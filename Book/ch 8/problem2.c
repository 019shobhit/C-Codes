// Write a function power(a,b), to calculate the value of a raised to b.
#include<stdio.h> 
int power(int x, int y);
int main()
{
    int a,b;
    printf("enter number and power");
    scanf("%d%d",&a,&b);
    printf("the power of %d raised to %d is : %d",a,b,power(a,b));

    return 0;
}	

int power(int x,int y){
    int n=1;
    for(int i=1;i<=y;i++){
        n= n*x;
    }
    return n;
}