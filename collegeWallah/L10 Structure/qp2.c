// Create a structure type'Person' with name, salary and age as its attribute. Declare and initilize 2 variables for this. Print the name of first person and age of the other.
#include<stdio.h> 
#include<string.h>

int main()
{
    struct Person{
        char name[20];
        float salary;
        int age;
    };
    struct Person shobhit;
    shobhit.age = 21;
    shobhit.salary = 90000;
    strcpy(shobhit.name,"Shobhit Chauhan");

    struct Person akash;
    akash.age=20;
    akash.salary=60000;
    strcpy(akash.name,"Akash Chauhan");

    printf("Name of first person is %s \n",shobhit.name);
    printf("Age of the second person is  %d \n",akash.age);
    return 0;
}	