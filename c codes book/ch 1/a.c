// Temprature of a city in Fahrenheit degrees is input through the keyboard. Write a program to convert this temprature into Centigrade degrees.
#include<stdio.h> 

int main(){
    float temp;
    printf("enter temprature of a city");
    scanf("%f",&temp);
    printf("the temprature in centgrade is : %f",(temp-32)*(5/9));
    return 0;
}