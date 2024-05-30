// Write a program to store the details of 3 employe from user defined data use the structure declared above.
#include<stdio.h> 
struct employee{
    int code;
    float salary;
    char name[20];
};
int main()
{
    struct employee e1 , e2,e3;
    printf("Enter e1 code : ");
    scanf("%d",&e1.code);
    printf("Enter e1 salary : ");
    scanf("%f",&e1.salary);
    printf("Enter e1 name : ");
    scanf("%s",e1.name);

    printf("Enter e2 code : ");
    scanf("%d",&e2.code);
    printf("Enter e2 salary : ");
    scanf("%f",&e2.salary);
    printf("Enter e2 name : ");
    scanf("%s",e2.name);

    printf("Enter e3 code : ");
    scanf("%d",&e3.code);
    printf("Enter e3 salary : ");
    scanf("%f",&e3.salary);
    printf("Enter e3 name : ");
    scanf("%s",e3.name);
    
    printf("%d\n",e1.code);
    printf("%f\n",e1.salary);
    printf("%s\n",e1.name);
    printf("%d\n",e2.code);
    printf("%f\n",e2.salary);
    printf("%s\n",e2.name);
    printf("%d\n",e3.code);
    printf("%f\n",e3.salary);
    printf("%s\n",e3.name);
    return 0;
}	