#include <stdio.h>
void pass(int *x);

int main()
{
    int i=1;
    int *p=&i;
    printf("the addres of i is %u\n", p);
    pass(&i);
    return 0;
}
void pass(int *x)
{
    printf("the addres of i is %u\n", x);
}