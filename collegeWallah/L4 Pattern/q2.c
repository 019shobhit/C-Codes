// 1 2 3 4 5 
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
#include<stdio.h> 

int main()
{
    int n,m;
    printf("enter how many row and how many columns");
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}	