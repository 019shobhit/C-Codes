#include<stdio.h> 
float force(int);

int main(){
    int mass;
    printf("enter mass to get force");
    scanf("%d",&mass);
    printf("the force is : %f",force(mass));
    return 0;
}

float force(int mass){
    float x= mass* 9.8;
    return x;
}