// If the three sides of a triangle is entered though the keyboard, write a program to check whether the triangle is valid or not. The triangle is valid if the sum of two sides is greater than the largest of the three sides.
#include<stdio.h> 

int main()
{
    int s1,s2,s3,ls,sum;
    printf("Enter all 3 sides of triangle");
    scanf("%d%d%d",&s1,&s2,&s3);
    if(s1>s2){
        if(s1>s3){
            sum= s2+s3;
            ls=s1;
        }
        else{
            sum= s1+s2;
            ls=s3;
        }
    }
    else{
        if(s2>s3){
            sum= s1+s3;
            ls=s2;
        }
        else{
            sum= s1+s2;
            ls= s3;
        }
    }
    if(sum>ls){
        printf("the trangle is valid");
    }
    else{
        printf("Triangle is not valid");
    }
    return 0;
    }