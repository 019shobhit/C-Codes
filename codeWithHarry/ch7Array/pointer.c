#include <stdio.h>

int main()
{
    int x= 32,y=10;
    int *a = &x;
    int *b= &y;
    printf("the address of X is : %u \n", a);
    printf("the address of Y is : %u \n", b);
    double c=(*a)-(*b);
    printf("address of C is : %u \n", c);
    return 0;
}


// int main()
// {
//     char c = 'A';
//     char *a = &c ;
//     printf("the address of a is : %u \n", a);
//     a++;
//     printf("address of i is : %u \n", &c);
//     printf("address of a after increment is : %u \n", a);
//     return 0;
// }


// int main()
// {
//     float c = 36.6;
//     float *a = &c ;
//     printf("the address of a is : %u \n", a);
//     a=a-20;
//     printf("address of i is : %u \n", &c);
//     printf("address of a after increment is : %u \n", a);
//     return 0;
// }