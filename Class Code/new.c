#include<stdio.h> 

int main()
{
    int n=5;
    for(int i=1;i<n*2;i++){
        for(int j=1;j<n*2;j++){
            for(int k=1;k<=n;k++){
                if(i==k || j==k || i==(k*2)-1 || j==(k*2)-1 && ){
                    printf("%d ",n-k+1);
                }
            }
        }
        printf("\n");
    }
    return 0;
}	