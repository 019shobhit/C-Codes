#include <stdio.h>

int main()
{
    int year;
    printf("Enter year to check year is leap or not");
    scanf("%d", &year);
    if(year % 4 == 0){
        if(year % 100  == 0 && year % 400 !=0){
            printf("year is not a leap year");
        }
        else
        printf("year is leap year");
    }
    else
    {
        printf("not a leap year");
    }
    return 0;
}