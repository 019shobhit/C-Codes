#include<stdio.h> 
#include<string.h> 

int main()
{
    char c1[10]="Shobhit";
    char c2[10]=" Chauhan";
    char ch[20];
    strcpy(ch,c1);
    strcat(ch,c2);
    printf("%s",ch);
    return 0;
}	