#include<stdio.h> 

int main(){
    int p,n;
    float r,si;
    printf("Enter value of p,n,r");
    scanf("%d%d%f",&p,&n,&r);
    si=p*n*r/100;
    printf("si is %f",si);
    return 0;
}