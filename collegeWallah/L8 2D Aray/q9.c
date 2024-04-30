// Write a Program to rotate a matrix 90 degree clockwise.

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
void trans_matrix(int x, int y, int arr[x][y])
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
}
void rotate(int x, int y, int arr[x][y])
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y / 2; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[i][y - 1 - j];
            arr[i][y - 1 - j] = temp;
        }
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
    trans_matrix(x, y, arr1);
    output_matrix(x, y, arr1);
    printf("\n");
    rotate(x, y, arr1);
    output_matrix(x, y, arr1);
    return 0;
}