// Write a program with structure representing a complex number.

#include<stdio.h> 

typedef struct complex
{
    int real;
    int complex;
}c;

int main()
{
    c x;
        printf("Enter the value of real number \n");
        scanf("%d",&x.real);
        printf("Enter the value of comple number \n");
        scanf("%d",&x.complex);
    return 0;
}	