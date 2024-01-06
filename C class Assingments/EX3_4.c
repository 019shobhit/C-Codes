// Writr a program to get addition of digits of number

#include<stdio.h> 

int main(){
    int num,rem,sum=0;
    printf("enter number to do sum of digits of the number");
    scanf("%d",&num);
    while(num!=0){
        rem=num%10;
        num=num/10;
        sum+=rem;
    }
    printf("The sum of digit is %d",sum);
    return 0;
}