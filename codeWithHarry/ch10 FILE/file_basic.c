#include<stdio.h> 

int main()
{
    FILE *ptr;
    ptr = fopen("sample1.txt","a");
    ptr = fopen("sample1.txt","w");
    fclose(ptr);
    return 0;
}	