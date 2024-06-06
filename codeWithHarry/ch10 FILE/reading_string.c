#include<stdio.h> 

int main()
{
    FILE *fptr;
    fptr = fopen("new.txt","r");
    char c = fgetc(fptr);
    if (fptr == NULL)
    {
        printf("Fine not Exit");
    }
    else{
        while(c != EOF){
            printf("%c",c);
            c=fgetc(fptr);
        }
    }
    fclose(fptr);
    return 0;
}	