// write program for prime number using while or do while loop
#include<stdio.h> 
int main(){
    int n,prime=0,i=2;
    printf("Enter number to check Werather the give number is prime or not");
    scanf("%d",&n);
    while (i<=n/2)
    {
        if(n%i==0){
            prime=1;
            break;
        }
        i++;
    }
    
    if(prime==1){
        printf("%d is NOT prime",n);
    }
    else{
        printf("%d is prime",n);
    }
    return 0;
}