#include<stdio.h> 
struct employee{
    int code;
    float salary;
    char name[20];
};
int main()
{
    struct employee e1 ={12,45.26,"Shobhit"};
    printf("The code of e1 is: %d \n",e1.code);
    printf("The salary of e1 is: %f \n",e1.salary);
    printf("The name of e1 is: %s \n",e1.name);
    
    return 0;
}	