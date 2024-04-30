// Pascal Triangle
#include<stdio.h> 
int fact(int n){
    int f=1;
    for(int i=2;i<=n;i++){
        f *=i;
    }
    return f;
}
int ncr(int n,int r){
    int ncrr= fact(n) / (fact(r)*fact(n-r));
    return ncrr;

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
            printf("%d ",ncr(i,j));
        }
        printf("\n");
    }

    return 0;
}	