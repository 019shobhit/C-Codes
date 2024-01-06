// Two numbers are input threugh the keyboard into two location C and D. Write a program to interchange the content of C amd D.

#include<stdio.h> 

int main()
{
    int c,d;
    printf("enter two numbers");
    scanf("%d%d",&c,&d);
    printf("The first value is %d \n",c);
    printf("The second value is %d \n",d);
    printf("after interchanging the value of 1st and 2nd number \n");
    int temp;
    temp = c;
    c=d;
    d=temp;
    printf("The first value is %d \n",c);
    printf("The second value is %d \n",d);
    return 0;
    }