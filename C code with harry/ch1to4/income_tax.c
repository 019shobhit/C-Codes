#include<stdio.h> 

int main(){
    int income;
    float tax =0;
    printf("enter your annually income \n");
    scanf("%d",&income);
    if(income<250000){
        tax=0;
    }
    else if(income>=250000 && income<500000){
        tax += (income - 250000)*(0.05);
    }
    else if(income>=500000 && income <1000000){
        tax += (income - 500000) * (0.20);
    }
    else if(income>=1000000){
        tax += (income - 1000000) * (0.30);
    }
    printf("your tax payble is %f",tax);
    return 0;
}