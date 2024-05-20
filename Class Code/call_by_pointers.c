// 20-12-2023

#include<stdio.h> 
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

int main()
{
    int a=3,b=5;
    printf("the value of a & b before swaping is %d & %d \n", a, b);
    swap(&a,&b);
    printf("the value of a & b After swaping is %d & %d \n", a, b);
    return 0;
    }