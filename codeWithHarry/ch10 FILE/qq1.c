// Write a program to check whether the file you wants to open is present or not.
#include <stdio.h>
int main()
{
    FILE *ptr;
    int num1;
    int num2;
    ptr = fopen("shobhit.txt", "r");

    if (ptr == NULL)
    {
        printf("This file does not exit");
    }
    else
    {
        fscanf(ptr, "%d", &num1);
        fscanf(ptr, "%d", &num2);
        printf("The value of num is %d\n", num1);
        printf("The value of num is %d\n", num2);
    }
    fclose(ptr);
    return 0;
}