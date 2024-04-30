// Write a program to print all the ASCII values and heir equivalent characters using a while loop. the ASCII values vary from 0 to 255.
#include<stdio.h> 

int main()
{
    int i=0;
    while(i<266){
        printf("%d \t %c \n",i,i);
        i++;
    }
    
    return 0;
    }