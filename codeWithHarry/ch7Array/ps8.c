#include <stdio.h>
void multi(int r, int, int[][10]);

int main()
{
    int n;
    printf("enter how much multiplication table you want : ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter %d element of array \n", i + 1);
        scanf("%d", &array[i]);
    }
    int arr[n][10];
    for (int i = 0; i < n; i++)
    {
        printf("The multiplicacion table of %d is : ",array[i]);
        multi(i, array[i], arr);
        printf(" \n \n");
    }
    return 0;
}
void multi(int r, int num, int arr[r][10])
{
    for (int i = 0; i < 10; i++)
    {
        arr[r][i] = num * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d  X  %d  =  %d \n", num, (i + 1), arr[r][i]);
    }
}
