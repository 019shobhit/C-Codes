//  Calculate percentage of 4 subjects where marks are out of 40
#include <stdio.h>

int main()
{
    float x1 = 38;
    float x2 = 35;
    float x3 = 30;
    float x4 = 28;
    float total = x1 + x2 + x3 + x4;
    printf("The percentage of the the 5 subject is: %f",(total*100)/(4*40));
    return 0;
}