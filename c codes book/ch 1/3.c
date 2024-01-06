// If the marks obtained by a student in five different subject are input through the keyboard, write a program to find out the aggregate marks and percentage marks obtained by the student. Assume that the maximum marks that can be obtained by a student in each subject is 100.

#include<stdio.h> 

int main(){
    int m1,m2,m3,m4,m5,aggr;
    float per;
    printf("enter marks of five subjects ");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    aggr=m1+m2+m3+m4+m5;
    per=aggr/5;
    printf("Maximum marks : 500 \n");
    printf("Aggregate marks : %d \n", aggr);
    printf("Percentage is : %f \n",per);
    return 0;
}