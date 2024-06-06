// Write a program to modify a file containing an integer to double its value

 #include<stdio.h> 
 
 int main()
 {
    FILE *ptr1;
    FILE *ptr2;
    ptr1 = fopen("ps05a.txt","r");
    ptr2 = fopen("ps05b.txt","w");
    int n;
    while (n != EOF){
    fscanf(ptr1,"%d",&n);
    
    }
    fclose(ptr1);
    fclose(ptr2);
    return 0;
 }	