#include <stdio.h>

typedef struct employee
{
    int code;
    float salary;
    char name[20];
} x;

int main()
{
    x e1;
    e1.code=111;
    e1.salary=4563.12;
    strcpy(e1.name,"Shobhit");

    return 0;
}