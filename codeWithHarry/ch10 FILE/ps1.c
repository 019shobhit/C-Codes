// Write a program to read three integers from a file.

#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("ps01.txt", "r");
    int a,b,c;
    if (fptr == NULL)
    {
        printf("File not exit");
    }
    else
    {
        fscanf(fptr, "%d %d %d", &a, &b, &c);
        printf("The three values are %d %d %d \n", a, b, c);
    }
    fclose(fptr);
    return 0;
}