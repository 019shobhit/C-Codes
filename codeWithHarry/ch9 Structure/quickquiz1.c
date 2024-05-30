#include<stdio.h> 
#include<string.h> 

typedef struct employee
{
    int code;
    float salary;
    char name[20];
}x;

void show(x emp){
    printf("The code of the employee is: %d \n",emp.code);
    printf("The salary of the employee is: %f \n",emp.salary);
    printf("The name of the employee is: %s \n",emp.name);
    emp.code= 56;
}
int main()
{
    x e1;
    e1.code=111;
    e1.salary=4563.12;
    strcpy(e1.name,"Shobhit");
    show(e1);
        printf("The code of the employee is: %d \n",e1.code);

    
    return 0;
}	