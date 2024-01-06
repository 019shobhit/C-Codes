#include<stdio.h> 

int main(){
    int n;
    int n1=0;
    int n2=1;
    int fib=0;
    printf("enter number");
    scanf("%d",&n);
    for(int i=1; i<=n;i++){
        fib=n1+n2;
        n1=n2;
        n2=fib;
            printf("the value is : %d \n",fib);

    }
    return 0;
}