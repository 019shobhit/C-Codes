#include<stdio.h> 
void changevalue(int);
int main(){
    int a=5;
    printf("the value of a before change is %d \n",a);
    printf("the addres of a before change is %u\n",&a);
    changevalue(a);
    printf("the value of a after change is %d\n",a);
    printf("the addres of a after change is %u\n",&a);
    return 0;
}
void changevalue(int x){
    x = x*10;
}