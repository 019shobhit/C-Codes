#include <stdio.h>

int main()
{
    int i = 2, num, flag=0;
    printf("Enter number to get the factorial of the given number");
    scanf("%d", &num);
    
    do{
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
        i++;
    }while (i <= num / 2);
    if (flag == 1)
        printf("the number is not prime");
    else
        printf("no. is prime");
    return 0;
}