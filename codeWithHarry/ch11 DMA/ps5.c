// Create an array of multiplication table of 7 upto 10(7 X 10). Use realloc to make it store 15 numbers from (7 X 1  to  7 X 15).
 #include<stdio.h> 
 #include<stdlib.h> 
 
 int main()
 {
    int *ptr;
    ptr = (int *)malloc(10*sizeof(int));
    for(int i=0;i<10;i++){
        printf("7  X  %d  =  %d \n",i+1,(i+1)*7);
    }
    realloc(ptr,15*sizeof(int));
    for(int i=0;i<15;i++){
        printf("7  X  %d  =  %d \n",i+1,(i+1)*7);
    }
    return 0;
 }	