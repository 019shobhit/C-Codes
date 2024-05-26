// Write a Program in C to check an input number is prime or not. Implement this with the help of a function. THe name of the function must be check Prime.

#include <stdio.h>
int checkprime(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}
void main()
{
    int n;
    printf("Enter number to check the no. is prime or not");
    scanf("%d", &n);

    int x = checkprime(n);
    if (x == 0)
    {
        printf("no. is not prime");
    }
    else
    {
        printf("no. is prime");
    }
}
