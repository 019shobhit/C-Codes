// Write a program to create a dynamic array of 5 floats using malloc().

#include<stdio.h> 
#include<stdlib.h> 

int main()
{
    float *ptr;
    ptr = (float *)malloc(5*sizeof(float));
    for(int i=0;i<5;i++){
        printf("Enter the %d element  \n",i+1);
        scanf("%f",&ptr[i]);
    }
    for(int i=0;i<5;i++){
        printf("the %d element is: %f \n",i+1,ptr[i]);
    }
    return 0;
}	