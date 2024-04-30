#include <stdio.h>
#include<string.h>

int main()
{
    struct mca{
        char name[20];
        int roll_no;
        float marks;
    } shobhit, abhishek, akash;

    shobhit.roll_no = 44;
    shobhit.marks = 20.5;
    shobhit.name ;
    strcpy(shobhit.name,"Discrete Math");

    printf("name : %s \n",shobhit.name);
    printf("roll_no : %d \n",shobhit.roll_no);
    printf("marks : %f",shobhit.marks);


    return 0;
}