// Write a program to generate all combinations of 1, 2 and 3 using for loop.
 #include<stdio.h> 
 
 int main()
 {
    for(int i=1;i<4;i++){
        for(int j=1;j<4;j++){
            for(int k=1;k<4;k++){
                printf("%d%d%d \t",i,j,k);
            }
        }
    }
    return 0;
    }