// Write a function to calculate the funvtional value of any integer entered through the keyboard.
#include <stdio.h>
int fact(int);
int main()
{
    int num;
    printf("enter number to get factorial of that number");
    scanf("%d",&num);
    printf("The factorial of the number is %d",fact(num));
    return 0;
}

int fact(int n){
    int x=1;
    for(int i=1;i<=n;i++){
        x=x*i;
    }
    return x;
}
