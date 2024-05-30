// Create a structure representing a bank account of a customer. What field did you use and Why?
 #include<stdio.h> 
 
 typedef struct bank
 {
    char name[20];
    float bal;
    int age;
 }acc;
 
 int main()
 {
    acc x[10];
    for(int i=0;i<10;i++){
      scanf("%s",x[i].name);
      scanf("%f",x[i].bal);
      scanf("%d",x[i].age);
    }
    return 0;
 }	