#include<stdio.h> 
#include<string.h> 
struct employee{
    int code;
    float salary;
    char name[20];
};
int main()
{
    struct employee x[10];

    x[0].code=01;
    x[0].salary=999.50;
    strcpy(x[0].name,"shivam");

    x[1].code=02;
    x[1].salary=152.50;
    strcpy(x[1].name,"abhishek");

    x[2].code=03;
    x[2].salary=1999.50;
    strcpy(x[2].name,"anurag");

    printf("%d\n",x[0].code);
    printf("%f\n",x[0].salary);
    printf("%s\n",x[0].name);
    printf("%d\n",x[1].code);
    printf("%f\n",x[1].salary);
    printf("%s\n",x[1].name);
    printf("%d\n",x[2].code);
    printf("%f\n",x[2].salary);
    printf("%s\n",x[2].name);
    return 0;
}	