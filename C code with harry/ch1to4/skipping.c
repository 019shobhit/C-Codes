// Write a program in c to print the number bw 1-n , skipping the multiple of 5
#include<stdio.h>

void main(){
    int i,n;
    printf("enter number to print ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%5==0){
            continue;
        }
        else{
            printf("%d \t",i);
        }
    }
}