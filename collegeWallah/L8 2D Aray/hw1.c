// Write a program to add two matrices without using 3rd matrix

#include<stdio.h> 

void input(int x,int y,int arr[x][y]){
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("Enter %d row and %d column element: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
}


void sum(int x,int y,int arr1[x][y],int arr2[x][y]){
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            arr1[i][j]+=arr2[i][j];
        }
    }
}

void output(int x,int y,int arr[x][y]){
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}


int main()
{
    int n,m;
    printf("enter row and column of matrix to create a matrix : ");
    scanf("%d%d",&n,&m);
    int arr1[n][m],arr2[n][m];
    input(n,m,arr1);
    input(n,m,arr2);
    sum(n,m,arr1,arr2);
    output(n,m,arr1);
    return 0;
}	