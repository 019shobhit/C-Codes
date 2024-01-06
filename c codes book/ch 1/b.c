// The length and breadth of a rectangle and radius of a circle are input through the keyboard. Write a program to calculate the area and perimeter of the rectangle, and the area and circumference of the circle.

#include <stdio.h>

int main()
{
    int l, b, r;
    printf("Enter Length and breadth of a rectangle and Radius of a circle \n");
    scanf("%d%d%d",&l,&b,&r) ;
    printf("area of the rectangle is : %d \n",(l*b));
    printf("perimeter of the rectangle is : %d \n",2*(l+b));
    printf("area of the circle is : %f \n",(3.14)*r*r);
    printf("Circumference of the circle is : %f",2*(3.14)*r);
    return 0;
}