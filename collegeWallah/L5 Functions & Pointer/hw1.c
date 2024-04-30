// Print nPr using function
#include<stdio.h> 
int fact(int n){
    int f=1;
    for(int i=2;i<=n;i++){
        f *=i;
    }
    return f;
}
int npr(int n,int r){
    int nprr= fact(n) / (fact(r));
    return nprr;
}
int main()
{
    int n;
    printf("Enter how many rows: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("%d ",npr(i,j));
        }
        printf("\n");
    }

    return 0;
}	