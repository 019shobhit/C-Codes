// If a character is entered through thre keyboard , write a program to determine wether the character is a capital letter, a small case letter,a digit or a special symbol.
#include<stdio.h> 

int main()
{
    char ch;
    printf("enter character ");
    scanf("%c",&ch);
    if(ch>=0 && ch<128){
        if(ch>=65 && ch<=90){
            printf("A-Z");
        }
        else if(ch>=97 && ch<=122){
            printf("a-z");
        }
        else if (ch>=48 && ch<=57){
            printf("0-9");
        }
        else{
            printf("Special Symbol");
        }
    }
    return 0;
    }