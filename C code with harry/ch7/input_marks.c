#include<stdio.h> 

int main(){
int marks[5];
int x[]={1,2,3,4,5,6};
for(int i=0;i<5;i++){
    printf("enter marks %d : ",i+1);
    scanf("%d", &marks[i]);
}
for(int i=0;i<5;i++){
    printf("The marks of the %d student is : %d  \n",i+1,marks[i]);
}
    return 0;
}