// Write a menu driven program which has following options:
// 1. Factoral of a number
// 2. Prime or not
// 3. odd or even
// 4. Exit
// once a menu item is selested the appropriate action should be taken and once this action is finished, the menu should reappear. Unless the user selects the 'Exit'option the progam should continue to work.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int menu, num, fact = 1, flag = 1;
    printf("chose any number \n1 for factorial \n2 for prime number \n3 for odd or even \n4 for Exit \n");
    scanf("%d", &menu);
    switch (menu)
    {
    case 1:
        printf("enter number to get fctorial : ");
        scanf("%d", &num);
        for (int i = 1; i <= num; i++)
        {
            fact = fact * i;
        }
        printf("The factorial of %d is %d \n", num, fact);
        break;
    case 2:
        printf("Enter number to check prime or not : ");
        scanf("%d", &num);
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
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
            printf("number is prime \n");
        }
        else
        {
            printf("number not prime \n");
        }
        break;
        case 3: 
        printf("Enter number to check odd or even");
        scanf("%d",&num);
        if(num % 2== 0){
            printf("number is even");
        }
        else{
            printf("number is odd");
        }
        break;
        case 4: 
        exit(0);
    default:
    printf("Wrong Choise");
        break;
    }
    return 0;
}