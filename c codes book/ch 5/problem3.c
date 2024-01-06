//Two numbers are entered through the keyboard. Write a program to find the value of one number to the power of another.
#include<stdio.h> 

int main()
{
    float num,power =1;
    int i=1,pow;
    printf("enter number and power ");
    scanf("%f%d",&num,&pow);
    while(i<=pow){
        power = num *power;
        i++;
    }
    printf("%f to the powe of %d is %f", num,pow,power);
    return 0;
    }