
// 1 2 3 4 5 
// 1 2 3 4
// 1 2 3
// 1 2
// 1
#include<stdio.h> 

int main()
{
    int n;
    printf("enter how many row: ");
    scanf("%d", &n);
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}	