#include<stdio.h> 

int main(){
    int marks[4] ={10,12,15,13};
    for(int i=0;i<4;i++){
        printf("Enter The value of %dth student \n",i+1);
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<4;i++){
        printf("The value of marks of the %d student is : %d \n",i+1,marks[i]);
    }
    return 0;
}