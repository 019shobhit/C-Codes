// 1 
// 1 3
// 1 3 5
// 1 3 5 7
// 1 3 5 7 9
#include<stdio.h> 

int main()
{
    int n;
    printf("enter how many row: ");
    scanf("%d", &n);
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",j*2-1);
        }
        printf("\n");
    }
    return 0;
}	