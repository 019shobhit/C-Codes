// Write a program to add two matrices.
#include <stdio.h>
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
void add_matrix(int row, int col, int arr1[row][col], int arr2[row][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr1[i][j] += arr2[i][j];
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
    int arr2[x][y];
    printf("enter 1st matrix");
    input_matrix(x, y, arr1);
    output_matrix(x, y, arr1);
    printf("enter 2st matrix");
    input_matrix(x, y, arr2);
    output_matrix(x, y, arr2);
    printf("After addition");
    add_matrix(x, y, arr1, arr2);
    output_matrix(x, y, arr1);

    return 0;
}