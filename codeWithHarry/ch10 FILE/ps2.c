// Write a program to generte multiplication table of given number in text format. make sure that the file is readable and well formated.

#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("ps02.txt", "w");
    int n = 5;
    for (int i = 1; i <= 10; i++)
    {
        fprintf(fptr, "%d  X  %d  =  %d \n", n, i, n * i);
    }
    fclose(fptr);
    return 0;
}