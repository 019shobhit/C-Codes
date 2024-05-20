// 20-12-2023

#include <stdio.h>
void increment(int x, int y)
{
    x = x + 1;
    y = y + 1;
}

int main()
{
    int a, b;
    a = 4;
    b = 6;
    printf("the value of a & b before increment is %d & %d \n", a, b);
    increment(a, b);
    printf("the value of a & b after increment is %d & %d \n", a, b);
    return 0;
}