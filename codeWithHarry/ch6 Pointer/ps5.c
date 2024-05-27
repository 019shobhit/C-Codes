#include<stdio.h> 

int main(){
    int i=123;
    int *ptr;
    ptr=&i;
    int **pptr;
    pptr=&ptr;
    printf("the value of i by i is %d \n",i);
    printf("the value of i by ptr is %d \n",*ptr);
    printf("the value of i by pptr is %d \n",**pptr);
    return 0;
}