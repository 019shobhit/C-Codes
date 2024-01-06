#include<stdio.h> 
int add(int a,int b);

int main(){
    int x=add(3,5);
    printf("the sum is :%d",x);
    return 0;
}
int add(int a,int b){
    int sum=a+b;
    return sum;
}