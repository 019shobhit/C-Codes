// Write a program to create an array of size n using calloc where n is a integer entered by user.
 #include<stdio.h> 
 #include<stdlib.h> 
 
 int main()
 {
    int *ptr,n;
    printf("Enter number to create an array of that size: ");
    scanf("%d",&n);
    ptr = (int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        printf("%d \n",ptr[i]);
    }
    free(ptr);
    return 0;
 }	