// Write a program to check weather a triangle is valid or not, when the three angles of the triangle are entered trough the keyboard. A triangle is valid if the sum of all the three angle is equal to 180 degrees.
#include<stdio.h> 

int main()
{
    int x,y,z;
    printf("enter 1st angle of triangle ");
    scanf("%d",&x);
    printf("enter 2nd angle of triangle ");
    scanf("%d",&y);
    printf("enter 3rd angle of triangle ");
    scanf("%d",&z);
    int sum=x+y+z;
    if(sum == 180){
        printf("triangle is valid \n");
    }
    else{
        printf("Triangle is not valid \n");
    }
    return 0;
    }