#include<stdio.h> 
 void pattern(int);
 
 int main(){
    int num;
    printf("enter number to get the pattern");
    scanf("%d",&num);
    pattern(num);
    return 0;
 }
 void pattern(int n){
    if(n==1){
        printf(" * \n");
        return;
    }
    pattern(n-1);
    for(int i=0;i<(2*n-1) ;i++){
        printf(" * ");
    }
    printf("\n");
 }