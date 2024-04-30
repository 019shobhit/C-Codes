// find the sum of given elements of matrix of n x m.
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
int sum_matrix(int row, int col, int arr[row][col])
{
    int sum =0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        printf("\n");
    }
    return sum;
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
    printf("\nThe sum of all elements is : %d",sum_matrix(x,y,arr1));
    return 0;
}	