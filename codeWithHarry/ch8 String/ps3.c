// Write your own version of strlen function from <string.h>
#include<stdio.h> 
int strlen(char *len){
    int i=0;
    while(*len != '\0'){
        i++;
        len++;
    }
    return i;
}
int main()
{
    char str[50];
    printf("Enter string to find length");
    gets(str);
    printf("The length of the string is %d",strlen(str));
    return 0;
}	
