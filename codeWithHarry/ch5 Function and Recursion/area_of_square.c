#include<stdio.h> 
#include<math.h> 

int main(){
    int side;
    printf("Enter side of square");
    scanf("%d",&side);
    printf("the area of the square is %f",pow(side,2));
    return 0;
}