//  Write a function to find the HCF of 2 given number

#include <stdio.h>

int min(int x, int y)
{
    if (x > y)
        return y;
    else
        return x;
}

int hcf(int x, int y)
{
    int num;
    for (int i = min(x, y); i>=1 ; i--)
    {
        if (x % i == 0 && y % i == 0){
            num = i;
            break;
        }
    }
    return num;
}

int main()
{
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);
    printf("The HCF is : %d",hcf(a,b));
    return 0;
}