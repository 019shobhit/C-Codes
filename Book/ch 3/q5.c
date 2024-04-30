//  Given the length and breath of a rectangle, write a program to find whether the area of the rectangle is greater then its perimeter. for example, the area of the rectangle with length = 5 and breadth = 4 is greater than its perimeter.
#include<stdio.h> 

int main()
{
    int l,b;
    printf("enter length and breath of rectangle");
    scanf("%d%d",&l,&b);
    int a,p;
    a = l*b;
    p = 2*(l+b);
    if(a>p){
        printf("The area of the rectangle is greater than its perimeter");
    }
    else{
        printf("The area is less than its perimeter of rectangle");
    }
    return 0;
    }