//  Print first n fibonacci number using function

#include <stdio.h>

void fib(int n){
    int n1=1,n2=1,nt=0;
    for(int i=1;i<n;i++){
        n1=n2;
        n2=nt;
        nt=n1+n2;
        printf("%d\n",nt);
    }
}

int main()
{
    printf("Enter number: ");
    int n;
    scanf("%d", &n);
    fib(n);
    return 0;
}