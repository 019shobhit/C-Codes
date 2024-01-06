#include <stdio.h>
int fib(int);

int main()
{
    int num;
    printf("enter no. to get the fibonacci term : ");
    scanf("%d",&num);
    printf("the fibonacci no. is : %d",fib(num));
    return 0;
}
int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}