// Write a program to add first seven terms of the following series using a for loop.
// (1/1!)+(2/2!) + (3/3!) + (4/4!) + .....
#include <stdio.h>

int main()
{
    float sum = 0.0;
    float fact;
    for (int i = 1; i <= 7; i++)
    {
        fact = 1.0;
        for (int j = 1; j <= i; j++)
        {
            fact = fact * j;
        }
        sum = sum + (i / fact);
    }
    printf("The sum is %f \n", sum);
    return 0;
}