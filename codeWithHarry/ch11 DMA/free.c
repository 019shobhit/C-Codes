#include<stdio.h> 
#include<stdlib.h> 

int main()
{
    int *ptr;
    int *ptr2;
    ptr = (int *)malloc( 600000 * sizeof(int));
    for(int i=0;i<600000;i++){
        ptr2= (int *)malloc(600000 * sizeof(int));
        printf("Enter the %d element",i+1);
        scanf("%d",&ptr2[i]);
        free(ptr2);
    }
    for(int i=0;i<5;i++){
        printf("the %d element is %d \n",i+1,ptr[i]);
    }
    free(ptr);
    return 0;
}	