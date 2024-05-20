#include <stdio.h>

typedef struct student
{
    char name[50];
    struct dob
    {
        int date;
        int month;
        int year;
    };
    struct dob db;
    int marks[3];
} st;
int main()
{
    st s[2];
    for (int i = 0; i < 2; i++)
    {
        printf("enter name %d of person ", i + 1);
        scanf("%s", &s[i].name);

        printf("enter date of DoB %d person ", i + 1);
        scanf("%d", &s[i].db.date);

        printf("enter month of DoB %d person ", i + 1);
        scanf("%d", &s[i].db.month);

        printf("enter year of DoB %d person ", i + 1);
        scanf("%d", &s[i].db.year);

        for (int j = 0; j < 3; j++)
        {
            printf("Enter marks of %d person of %d subject ", i + 1, j + 1);
            scanf("%d", &s[i].marks[j]);
        }
    }
    printf("\n");
    for (int i = 0; i < 2; i++)
    {
        printf("Name of %d person is : %s \n", i + 1, s[i].name);
        printf("Date of birth of %d person is %d/%d/%d\n", i + 1, s[i].db.date, s[i].db.month, s[i].db.year);
        for (int j = 0; j < 3; j++)
        {
            printf("the marks of %d person of %d subject is %d \n", i + 1,j+1,s[i].marks[j]);
        }
    }

    return 0;
}