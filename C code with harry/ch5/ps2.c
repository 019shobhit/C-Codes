#include<stdio.h> 

float ctof(int);

int main(){
    int c;
    printf("enter the value of celcius to get feranite temprature");
    scanf("%d",&c);
    printf("the celcius temprature in feranhite is : %f f",ctof(c));

    return 0;
}
float ctof(int n){
    float x= (n*9/5.0)+32;
    return x;
}