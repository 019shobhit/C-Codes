// Any integer is input threugh the keyboard. Write a Program to find out Weather it is an odd number or even number.
#include <stdio.h>

int main()
{
    int num;
    printf("Enter any number to check no. is even or odd");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("number is even");
    }
    else
    {
        printf("Number is odd");
    }
    return 0;
}