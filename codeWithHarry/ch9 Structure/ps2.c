// Write a function Sum Vector which returns the sum of two vectors passed to it. THe vector must be two dimentional.
#include <stdio.h>

typedef struct vector
{
   int x;
   int y;
} vec;
vec sumvec(vec a, vec b)
{
   vec result;
   result.x = a.x+b.x;
   result.y = a.y+b.y;
   return result;
}
int main()
{
   vec a, b, sum;
   a.x = 5;
   a.y = 7;
   b.x = 3;
   b.y = 5;
   sum = sumvec(a, b);
   printf("%d \t %d",sum.x,sum.y);
   return 0;
}