// IS prime function

#include <stdio.h>
#include <stdbool.h>

int isprime(int);

int main()
{
    int n;
    printf("enter number to check prime or not");
    scanf("%d",&n);
    int x; 
    x = isprime(n);
    if(x==0){
        printf("no is not prime");
    }
    else{
        printf("no. is prime");
    }
    return 0;
}

int isprime(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return 0;
            break;
        }
        else
        {
            return 1;
        }
    }
}