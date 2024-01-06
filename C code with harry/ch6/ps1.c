#include<stdio.h> 

int main(){
    int a=5;
    int *p;
    p=&a;
    printf("the addres of a is %u \n",p);
    printf("the value of a is %d \n",*p);
    return 0;
}