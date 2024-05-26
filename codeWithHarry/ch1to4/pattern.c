// Write a C program to print The following program
#include<stdio.h>
void main(){
    for(int i=1; i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("* \t");
        }
        printf("\n");
    }
}