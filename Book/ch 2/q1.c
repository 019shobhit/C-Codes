// if a five-digit number is input thrugh the keyboard, write a program to calculate the sum of its digit.(Hint: Use the modulus operator '%')

#include<stdio.h> 

int main(){
    int num,sum=0;
    printf("enter number to get the sum of digits ");
    scanf("%d",&num);
    while(num>0){
        sum+=(num%10);
        num= num/10;
    }
    printf("the sum of the digits is : %d",sum);
    return 0;
}