// A year is entered through the keyboard , write a program to determine weather the year is leap or not. use the logical operators && and ||.
#include<stdio.h> 

int main()
{
    int year;
    printf("enter year");
    scanf("%d",&year);
    if(year % 4 == 0){
        if(year % 400== 0){
            printf("Leap year");
        }
        else if(year % 100 == 0){
            printf("not a leap year");
        }
        else{
            printf("Leap year");            
        }
    }
    else{
        printf("nota leap year");
    }
    return 0;
    }