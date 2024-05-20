#include<stdio.h> 
void cat(char s1[],char s2[]){
    int i=0,j=0;
    while(s1[i] !='\0'){
        i++;
    }
    while(s2[j] != '\0'){
        s1[i+j] =s2[j];
        i++;
        j++;
    }
}
int main()
{
    char s1[100],s2[100];
    printf("Enter your string 1: ");
    gets(s1);
    printf("Enter your string 1: ");
    gets(s2);
    cat(s1,s2);
    puts(s1);

    return 0;
}	