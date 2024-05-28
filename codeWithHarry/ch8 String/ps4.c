// Write a function slice() to slice a string. It should change the original string such that it is now the sliced string. Take m and n as the start and ending position for slice
#include<stdio.h> 
void slice(char *pt,int x,int y){
    int i=0;
    while (i<y)
    {
        pt[i]=pt[i+x];
        i++;
    }
    pt[i]='\0';
    

}
int main()
{
    char str[50];
    printf("Enter string");
    gets(str);
    slice(str,2,4);
    puts(str);
    return 0;
}	