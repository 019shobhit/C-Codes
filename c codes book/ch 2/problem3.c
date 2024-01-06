// Consider a currency system in which there are notes of seven denominations, namely, Rs. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. if a sum of Rs. N is entered through the keyboard, write a program to compute the smallest number of notes that will combine to give Rs. N.
#include<stdio.h> 

int main(){
    int amount, hun, fifty,ten,five,two,one,total;
    printf("Enter the amount ");
    scanf("%d",&amount);
    hun=amount/100;
    amount = amount%100;
    fifty=amount/50;
    amount = amount%50;
    ten=amount/10;
    amount = amount%10;
    five= amount/5;
    amount = amount%5;
    two =amount/2;
    amount = amount%2;
    one=amount/1;
    amount = amount%1;
    total= hun+fifty+ten+five +two+one;
    printf("the total smallest no. of notes is : %d",total);
    return 0;
}