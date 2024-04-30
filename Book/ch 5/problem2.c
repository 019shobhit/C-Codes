// Write a program to find the factorial value of any number through the keyboard.
 #include<stdio.h> 
 
 int main()
 {
    int n,fact=1;
    printf("Enter number to get factorial of the number");
    scanf("%d",&n);
    int i =1;
    while(i<=n){
        fact = fact *i;
        i++;
    }
    printf("The factoial of %d is %d",n,fact);
    return 0;
    }