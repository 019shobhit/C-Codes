// Write a program to count the occurence of the given character in a string

#include <stdio.h>

int main()
{
    char ch[50];
    printf("enter string : ");
    gets(ch);
    printf("enter character count : ");
    char x;
    scanf("%c",&x);
    int i = 0;
    int count =0;
    while (ch[i] != '\0')
    {
        if (ch[i] == x)
        {
            count++;
        }
        i++;
    }
    printf("the total occurence of %c is %d",x,count);
    return 0;
}