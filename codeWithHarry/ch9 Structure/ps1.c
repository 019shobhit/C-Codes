// Create a two dimentional vector using structure in C.
 #include<stdio.h> 
 
 struct vector
 {
    int x;
    int y;
 };
 
 int main()
 {
    struct vector a,b;
    a.x  = 50;
    a.y = 100;
    printf("X dimention is %d and Y dimention is %d\n",a.x,a.y);
    b.x  = 20;
    b.y = 90;
    printf("X dimention is %d and Y dimention is %d\n",b.x,b.y);
    
    return 0;
 }	