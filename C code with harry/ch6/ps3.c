#include<stdio.h> 
void changevalue(int *z);
int main(){
    int a=5;
    int *x=&a;
    printf("the value of a before change is %d \n",a);
    printf("the addres of a before change is %u\n",x);
    changevalue(&a);
    printf("the value of a after change is %d\n",a);
    printf("the addres of a after change is %u\n",x);
    return 0;
}
void changevalue(int *c){
    *c=(*c) * 10;
}