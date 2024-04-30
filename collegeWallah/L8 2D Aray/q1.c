// Write a program to store roll number and marks obtained by 4 students side by side in a marix

#include<stdio.h> 

int main()
{
    int student;
    printf("enter number of student");
    scanf("%d",&student);
    int marks[student][4];
    for(int i=0;i<student;i++){
        printf("enter %d student roll number ",i+1);
        for(int j=0;j<4;j++){
                        scanf("%d",&marks[i][j]);
            printf("enter %d student marks of subject %d ",i+1,j);
        }
    }
    for(int i=0;i<student;i++){
        for(int j=0;j<4;j++){
            printf("%d \t",marks[i][j]);
        }printf("\n");
    }
    return 0;
}	