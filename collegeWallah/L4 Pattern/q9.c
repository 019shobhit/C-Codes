// A B C D E 
// A B C D E 
// A B C D E 
// A B C D E 
// A B C D E 

#include<stdio.h> 

int main()
{
    int n;
    printf("enter how many row and how many columns");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%c ",j+64);
        }
        printf("\n");
    }
    return 0;
}	