// Take name and salery of two employes as input from the user and write them to a text file in the following format.

#include <stdio.h>

typedef struct employee
{
    char name[20];
    int age;
    float salary;
}
emp;

int main()
{
    FILE *fptr;
    fptr = fopen("ps04.txt", "w");
    emp x[2];
    for (int i = 0; i < 2; i++)
    {
        printf("Enter name of the employe");
        gets(x[i].name);
        

        printf("Enter age of the employe");
        scanf("%d",&x[i].age);

        printf("Enter Salary of the employe");
        scanf("%d",&x[i].salary);

        fprintf(fptr,"%s \t %d \t %f \n",x[i].name,x[i].age,x[i].salary);
    }
    return 0;
}