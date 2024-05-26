#include<stdio.h> 

int main(){
    int num;
    printf("Enter Marks");
    scanf("%d",&num);
    int marks=num/10;
    switch (marks)
    {
    case 9:
        printf("Grade A");
        break;
        case 8:
        printf("Grade B");
        break;
        case 7:
        printf("Grade D");
        break;
    
    default:
    printf("Grade D");
        break;
    }
    return 0;
}