// Write a program to read a text file character by character and write its content twice in a seprated file

#include <stdio.h>

int main()
{
    FILE *fptr1;
    FILE *fptr2;
    fptr1 = fopen("ps03a.txt", "r");
    fptr2 = fopen("ps03b.txt", "w");
    char c;
    c = fgetc(fptr1);
    while (c != EOF)
    {
        fputc(c,fptr2);
        // fputc(c,fptr2);
        c = fgetc(fptr1);
    }
    fclose(fptr1);
    fclose(fptr2);

    return 0;
}