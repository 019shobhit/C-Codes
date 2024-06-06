#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("shobhit.txt", "r");
    char c;
    if (fptr == NULL)
    {
        printf("Fine not Exit");
    }
    else
    {
        printf("%c", fgetc(fptr));
    }
    fclose(fptr);
    printf("%c", fgetc(fptr));
    return 0;
}