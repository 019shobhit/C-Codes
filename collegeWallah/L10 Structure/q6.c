// A record contains name of cricketer, his age, number of test matches that he has played and the average runs that he has scored in each test match. Create an array of structure to hold record of 20 such cricketer and then write a program to read these records.
#include <stdio.h>
#include <string.h>

int main()
{
    typedef struct cricketer
    {
        char fname[20];
        char lname[20];
        int age;
        int matches;
        float avgruns;
    } cricket;
    cricket m[2];
    for (int i = 0; i < 2; i++)
    {
        printf("Enter %d cricketer First name : \n", 1 + i);
        scanf("%s", &m[i].fname);
        printf("Enter %d cricketer Last name : \n", 1 + i);
        scanf("%s", &m[i].lname);
        printf("Enter age of %d cricketer : ", 1 + i);
        scanf("%d", &m[i].age);
        printf("Enter no. of matches played by %d cricketer : ", 1 + i);
        scanf("%d", &m[i].matches);
        printf("Enter no. of avg runs made by %d cricketer : ", 1 + i);
        scanf("%f", &m[i].avgruns);
    }
    for (int i = 0; i < 2; i++)
    {
        printf("\n%s %s \n",m[i].fname,m[i].lname);
        // printf("name of the %d cricketer is : %s ", 1 + i,m[i].name);
        printf("age of %d cricketer is : %d \n", 1 + i, m[i].age);
        printf("the no. of matches played by %d cricketer is : %d \n", 1 + i, m[i].matches);
        printf("the no. of avg runs made by %d cricketer is : %f \n", 1 + i, m[i].avgruns);
    }
    return 0;
}