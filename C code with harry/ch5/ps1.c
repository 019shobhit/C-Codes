#include<stdio.h> 

float average(int,int,int);

int main(){
    int x,y,z;
    printf("enter three numbers to get the average of those three numbers : ");
    scanf("%d%d%d",&x,&y,&z);
    printf("the average of the three nuber is : %f",average(x,y,z));
    return 0;
}
float average(int a,int b,int c){
    float x;
    x=(a+b+c)/3;
    return x;
}
