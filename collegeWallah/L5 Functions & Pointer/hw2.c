// Print the Prime factor of given number n
#include <stdio.h>
#include <math.h>

int main()
{
    printf("Enter number: ");
    int n, flag = 0;
    scanf("%d", &n);
    for (int i = 2; i <sqrt(n); i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
        else
            flag = 0;
    }
    if (flag == 0)
    {
        printf("no. is prime");
    }
    else
        printf("not prime");
    return 0;
}