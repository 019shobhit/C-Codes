#include <stdio.h>
int sum(int, int);

int main()
{
    int a = 4, b = 5;
    printf("the value of a and b is %d %d \n", a, b);
    printf("the sum of a and b is %d \n", sum(a, b));
    printf("the value of a and b after function call is %d %d \n", a, b);
    return 0;
}
int sum(int a, int b)
{
    int add = 0;
    add = a + b;
    return add;
}