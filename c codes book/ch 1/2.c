// The distance between two cities (in km.)is input through the keyboard. Write a program to convert and print this distance in meters, feet, inches and centimeters.
#include<stdio.h> 

int main(){
    float km,m,cm,ft,inch;
    printf("\n Enter distance in Km ");
    scanf("%f",&km);
    m=1000*km;
    cm=100*m;
    inch=cm/2.54;
    ft=inch/12;
    printf("Distance in meters : %f \n",m );
    printf("Distance in centimeer : %f \n",cm );
    printf("Distance in feet : %f \n",ft );
    printf("Distance in inches : %f \n",inch );
    return 0;
}