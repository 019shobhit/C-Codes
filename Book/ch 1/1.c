// Ramesh's basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary. Write a program to calculate his gross salary.
#include<stdio.h> 
int main(){
    float bs,da,hr,gs;
    printf("enter ramesh basic salary :");
    scanf("%f",&bs);
    da=0.4*bs;
    hr=0.2*bs;
    gs=da+hr+bs;
    printf("basic salary of ramesh is %f \n",bs);
    printf("Dearness Allowence %f \n",da);
    printf("House rent %f \n",hr);
    printf("Gross salary %f \n",gs);
    return 0;
}