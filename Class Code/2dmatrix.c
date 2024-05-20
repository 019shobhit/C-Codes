#include <stdio.h>
void input_array(int row, int col, int arr[row][col])
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
void output_array(int row, int col, int arr[row][col])
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
void trans(int row, int col, int arr[row][col], int tarr[row][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            tarr[j][i] = arr[i][j];
        }
    }
}
void multi(int row1, int col1, int col2, int arr1[row1][col1], int arr2[row1][col1], int arr3[row1][col1])
{
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            arr3[i][j]=0;
            for (int k = 0; k < col1; k++)
            {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
}

int main()
{
    int x, y;
    printf("Enter row number and column number to make a matrix");
    scanf("%d%d", &x, &y);
    int arr1[x][y];
    int arr2[x][y];
    int arr3[x][y];
    printf("Enter 1st matrix \n");
    input_array(x, y, arr1);
    output_array(x, y, arr1);
    printf("Enter 1st matrix \n");
    input_array(x, y, arr2);
    output_array(x, y, arr2);
    printf("After multiplication");
    multi(x,y,y,arr1,arr2,arr3);
     output_array(x, y, arr3);
    return 0;
}