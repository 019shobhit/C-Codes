//  Matrix multiplication

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
// void multi_matrix(int row1, int col1, int col2, int arr1[row1][col1], int arr2[row1][col1], int arr[row1][col1])
// {
//     for (int i = 0; i < row1; i++)
//     {
//         for (int j = 0; j < col2; j++)
//         {
//             arr[i][j] = 0;
//             for (int k = 0; k < col1; k++)
//             {
//                 arr[i][j]+=arr1[i][k] * arr2[k][j];
//             }
//         }
//         printf("\n");
//     }
// }
void multi_matrix(int x, int y, int arr1[x][y], int arr2[x][y], int arr3[x][y])
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            arr3[i][j] = 0;
            for (int k = 0; k < y; k++)
            {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
}

int main()
{
    int x, y;
    printf("Enter row and column  to create a matrix");
    scanf("%d%d", &x, &y);
    int arr1[x][y];
    int arr2[x][y];
    int arr[x][y];
    printf("enter 1st matrix \n");
    input_matrix(x, y, arr1);
    output_matrix(x, y, arr1);
    printf("enter 2st matrix \n");
    input_matrix(x, y, arr2);
    output_matrix(x, y, arr2);
    printf("\nAfter multiplication of matrix \n");
    multi_matrix(x, y, arr1, arr2, arr);
    output_matrix(x, y, arr);

    return 0;
}