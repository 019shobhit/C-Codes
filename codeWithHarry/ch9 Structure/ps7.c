// Write problem 5 structure using typedef keyword.

#include<stdio.h> 

typedef struct complex
{
    int real;
    int complex;
}c;

void display(c x){
    printf("The value of the real part is %d \n",x.real);
    printf("The value of the Imagenary part is %d \n",x.complex);
}

int main()
{
    c x[5];
    for(int i=0;i<5;i++){
        printf("Enter the value of %d real number \n",i+1);
        scanf("%d",&x[i].real);
        printf("Enter the value of %d comple number \n",i+1);
        scanf("%d",&x[i].complex);
    }    
    for(int i=0;i<5;i++){
        display(x[i]);
    }
    return 0;
}	