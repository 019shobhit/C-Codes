#include<stdio.h> 

int main()
{
    int n;
    printf("Enter how many rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",n-j+1);
        }
        for(int j=1;j<(n-i)*2+1;j++){
            printf("%d ",n-i+1);
        }
        for(int j=1;j<=i-1;j++){
            printf("%d ",n-i+j+1);
        }
        printf("\n");
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<n-i+1;j++){
            printf("%d ",n-j+1);
        }
        for(int j=1;j<(2*i);j++){
            printf("%d ",i+1);
        }
        for(int j=1;j<n-i+1;j++){
            printf("%d ",j+i);
        }
        printf("\n");
    }
    return 0;
}	