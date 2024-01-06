#include<stdio.h> 
#include<stdlib.h>
#include<time.h>

int main(){
    
    int num,n,i=1 ;
    srand(time(0));
    num=rand()%100 +1;
    // printf("the number is %d \n",num);
    do
    {
        printf("guess the number B/W 1-100 \n");
        scanf("%d",&n);
        if(n<num){
            printf("Greater number Please! \n");
        }
        else if(n>num){
            printf("Lower Number please! \n ");
        }
        else{
            printf("You gessed the number in %d attempts \n",i);
        }
        i++;
    } while (n!=num);
    return 0;
    getch();
}