#include<stdio.h> 
#include<string.h> 

int main()
{
    typedef struct friends{
        char name[50];
        int age;
        int class;
    }frnd;
    frnd abhi;
    frnd akshu;
    frnd rohit;
    
    abhi.age=20;
    abhi.class=12;
    strcpy(abhi.name,"Abhishek");

    akshu.age=19;
    akshu.class=12;
    strcpy(akshu.name,"Akash");
    
    rohit.age=17;
    rohit.class=12;
    strcpy(rohit.name,"Rohit");

    printf("rohit class %d",rohit.class);
    return 0;
}	