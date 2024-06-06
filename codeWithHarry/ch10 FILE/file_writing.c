#include <stdio.h>

int main()
{
    FILE *fptr;
    int num = 45;
    fptr = fopen("new.txt", "w");
    if (fptr == NULL)
    {
        printf("File not Exit");
    }
    else
    {
        for (int i = 0; i < 10; i++)
        {
            fprintf(fptr, "The value of num is %d.\n", num+i);
        }
    }
    fclose(fptr);
    return 0;
}