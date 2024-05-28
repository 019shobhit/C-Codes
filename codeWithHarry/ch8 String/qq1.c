#include<stdio.h> 

int main()
{
    char name[] ="Shobhit";
    // for(int i=0;i<7;i++){
    //     printf("%c",name[i]);
    // }

    char* ptr = name;
    while(*ptr != '\0'){
        printf("%c",*ptr);
        ptr++;
        
    }
    return 0;
}	