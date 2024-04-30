//  Print first n factorial number using function

#include <stdio.h>

void fact(int n){
    int i=1,f=1;
    while(i<=n){
         f*=i;
         printf("%d \t",f);
        i++;
    }
}

int main()
{
    printf("Enter number: ");
    int n;
    scanf("%d", &n);
    fact(n);
    return 0;
}