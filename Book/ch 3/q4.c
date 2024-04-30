// Write a program to find the absolute value of a number entered through the keyboard.
#include<stdio.h> 

int main()
{
    int num,abs;
    printf("enter number");
    scanf("%d",&num);
    if(num<0){
        abs = num*(-1);
    }else{
        abs=num;
    }
    printf("The absolute value of %d is %d",num,abs);
    return 0;
    }