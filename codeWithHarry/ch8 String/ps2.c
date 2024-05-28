// Write an program to take string as an input from the user using %c and %s confirm that the string are equal.
#include <stdio.h>
#include <string.h>

int main()
{
    char c1[30];
    char c2[30];
    printf("Enter 1st string : ");
    scanf("%s", c1);
    fflush(stdin);

    char x;
    int i = 0;
    printf("Enter 1st string : ");
    // scanf("%c", &x);
    while (x != '\n')
    {
        fflush(stdin);
        scanf("%c", &x);
        c2[i] = x;
        i++;
    }
    c2[i-1]= '\0';
    printf("THe value of string 1 is %s \n", c1);
    printf("THe value of string 2 is %s \n", c2);
    printf("The difference is %d",strcmp(c1,c2));

    return 0;
}