#include<stdio.h> 
void wrongswap(int ,int);
void swap(int *a,int *b);


int main(){
    int a=3,b=5;
    printf("the value of a and b before swap is %d %d \n", a, b);
    swap(&a,&b);
    printf("the value of a and b after swap is %d %d \n", a, b);
    return 0;
}

void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}


void wrongswap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}