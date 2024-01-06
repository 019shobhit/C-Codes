#include<stdio.h> 

int main(){
    char c ;
    printf("Enter The Character");
    scanf("%c",&c);
    if(c<=122 && c>=97){
        printf("given character %c is Lower case",c);
    }
    else{
        printf("given character %c is upper case",c);

    }

    return 0;
}