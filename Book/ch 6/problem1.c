//  Write a program to print all the prime numbers from 1 to 300.
#include <stdio.h>

int main()
{
    int flag = 1;
    for (int i = 2; i < 300; i++)
    {
        for (int j = 2; j < i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
            else
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            printf("%d \t", i);
        }
    }
    return 0;
}