// If lengths of three sides of a triangle are input through the keyboard, Write a program to find the area of the triangle.
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    float s,area;
    printf("enter 3 sides of triangle \n");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2.0;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle is : %f",area);
    return 0;
}