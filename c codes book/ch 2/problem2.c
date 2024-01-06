// If a five-digit number is input through the keyboard, write a program to reverse the number. 
#include<stdio.h> 

int main(){
    int n,d1,d2,d3,d4,d5;
    long int revnum;
    printf("\n enter five digit number(less than 32767) : ");
    scanf("%d",&n);
    d5=n%10;
    n=n/10;
    d4=n%10;
    n=n/10;
    d3=n%10;
    n=n/10;
    d2=n%10;
    n=n/10;
    d1=n%10;
    revnum= 10000*d5 + 1000*d4 + 100*d3 + 10*d2 + d1;
    printf("the reversed number is : %ld \n",revnum);
    return 0;
}