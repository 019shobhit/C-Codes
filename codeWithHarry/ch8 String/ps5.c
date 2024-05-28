// Write your own version of strcpy function from <string.h>

#include<stdio.h> 
#include<string.h>
void mystrcpy(char *ptr1, char ptr2[50]){
    int i=0;
    while (ptr1[i] != '\0')
    {
        ptr2[i]=ptr1[i];
        i++;
    }
    ptr2[i]='\0';
}
int main()
{
    char ch[50];
    gets(ch);
    char newch[50];
    mystrcpy(ch,newch);
    puts(newch);
    return 0;
}	