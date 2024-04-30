//  If cost price and selling price of an item is input threugh the keyboard, write a program to determine wether the seller has made profit or incurred loss. Also detrmine how much profit he made or loss he incurred.
#include<stdio.h> 

int main()
{
    int cp, sp,x;
    printf("enter cost price");
    scanf("%d",&cp);
    printf("enter selling price");
    scanf("%d",&sp);
    x=sp-cp;
    if(x>0){
        printf("He Made profit of %d rs",x);
    }
    else if (x==0)
    {
        printf("There is no profit or there is no loss");
    }
    
    else{
        printf("He got Loss of %d rs",x);
    }
    return 0;
    }