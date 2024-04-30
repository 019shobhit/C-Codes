// Write a program to calculate overtime pay of 10 employees. Overtime is paid at the rate of Rs. 12.00 per hour of every hour worked above 40 hours.Assume thet employees do not work for fractinal part of an hour.
#include<stdio.h> 

int main()
{
    int hour, otpay,i=1;
    while(i<=3){
        printf("Enter no. of hours worked");
        scanf("%d",&hour);
        if(hour>40){
            otpay= (hour-40)*12;
        }
        else{
            printf("There is no overtime");
            otpay=0;
        }
        printf("Hours = %d \n overtime pay = %d \n",hour,otpay);
        i++;
    }
    return 0;
    }
