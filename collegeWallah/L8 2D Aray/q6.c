//  Write a program to print the transpose of entered matrix by the user.
#include<stdio.h> 
void input_matrix(int row, int col, int arr[row][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("enter %d row %d column", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}
void output_matrix(int row, int col, int arr[row][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d \t", arr[i][j]);
        }
        printf("\n");
    }
}
void trans_matrix(int row, int col, int arr[row][col])
{
    int sum =0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d \n",arr[j][i]);
        }
        printf("\n");
    }
}

int main()
{
    int x, y;
    printf("Enter row and column  to create a matrix");
    scanf("%d%d", &x, &y);
    int arr1[x][y];
    printf("enter 1st matrix \n");
    input_matrix(x, y, arr1);
    output_matrix(x, y, arr1);
    printf("\nAfter transpose of matrix \n");
    trans_matrix(x,y,arr1);
    return 0;
}	