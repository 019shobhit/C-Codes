// print ncr using function
#include<stdio.h> 

int fact(int n){
    if(n==1)
    return 1.0;
    else
    return n*fact(n-1);
}
int main()
{
    int n, r;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter r: ");
    scanf("%d",&r);

    float ncr= fact(n)/(fact(r)*fact(n-r));

    printf("The combination is :%f",ncr);

    return 0;
}	