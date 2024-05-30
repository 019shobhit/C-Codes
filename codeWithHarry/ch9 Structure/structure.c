#include<stdio.h> 
#include<string.h> 
struct employee{
    int code;
    float salary;
    char name[20];
};

int main()
{
    struct employee e1;
    e1.code = 123;
    e1.salary=1254.235;
    strcpy(e1.name,"akash");

    struct employee e2;
    e2.code = 124;
    e2.salary=1000.50;
    strcpy(e2.name,"arvind");

    printf("%d\n",e1.code);
    printf("%f\n",e1.salary);
    printf("%s\n",e1.name);
    printf("%d\n",e2.code);
    printf("%f\n",e2.salary);
    printf("%s\n",e2.name);
    
    return 0;
}	