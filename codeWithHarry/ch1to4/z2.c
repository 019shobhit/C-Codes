#include<stdio.h> 

int main(){
    int num,p=1;
    printf("Enter number \n");
    scanf("%d",&num);
    for(int i=1;i<=num/2;i++){
        if(num%i==0){
            p*=i;
        }
    }
    printf("the total product of the divisors of the number is: %d \n",p);
    p=p/2;
    printf("the half is : %d \n",p);
    if(p%2==0){
        printf("the number is even \n");
    }
    else{
        printf("The number is odd \n");
    }
    
    return 0;
}